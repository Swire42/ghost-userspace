print("Python is starting.")

from libpyfifo2_bind import *
print("Importing bindings: OK")

import queue

print("Topology:", ", ".join((str([s.id() for s in c.siblings().ToVector()]) for c in ghost.GetTopoCpuList().ToVector())))

nurse = []

# Compare with fifo per_cpu C++ scheduler for comments

kBlocked = 0
kRunnable = 1
kQueued = 2
kOnCpu = 3

class TaskData:
    def __init__(self):
        self.run_state = kBlocked
        self.cpu = -1
        self.preempted = False
        self.prio_boost = False

def attach_data(task):
    if type(task.pydata) is not TaskData:
        task.pydata = TaskData()

class CpuState:
    def __init__(self, chan):
        self.channel = chan
        self.task = None
        self.run_queue = queue.deque()

    def enqueue(self, task):
        task.pydata.run_state = kQueued
        if task.pydata.prio_boost:
            self.run_queue.appendleft(task)
        else:
            self.run_queue.append(task)

    def dequeue(self):
        task.pydata.run_state = kRunnable
        return self.run_queue.popleft()

    def erase(self, task):
        self.run_queue.remove(task)

    def size(self):
        return len(self.run_queue)

    def empty(self):
        return self.size() == 0


class PyScheduler(ghost.BasicDispatchScheduler_PyTask_):
    def __init__(self, enclave, cpulist):
        self.allocator_ = ghost.ThreadSafeMallocTaskAllocator_PyTask_()
        ghost.BasicDispatchScheduler_PyTask_.__init__(self, enclave, cpulist, self.allocator_)
        self.cpu_states = [None for _ in range(len(self.cpus().ToVector())+1)]
        self.default_channel_ = None
        for cpu in self.cpus().ToVector():
            node = 0
            self.cpu_states[cpu.id()] = CpuState(ghost.LocalChannel(ghost.GHOST_MAX_QUEUE_ELEMS, node, ghost.SingleCpu(cpu)))
            if self.default_channel_ is None: self.default_channel_ = self.cpu_states[cpu.id()].channel
        self.cpu_k = -1 # for AssignCpu

    def cpu_state_of(task):
        return cpu_states[task.pydata.cpu]

    def Schedule(self):
        pass

    def EnclaveReady(self):
        for cpu in self.cpus().ToVector():
            cs = self.cpu_states[cpu.id()]
            agent = self.enclave().GetAgent(cpu)
            while not cs.channel.AssociateTask(agent.gtid(), agent.barrier()):
                continue # should check error against ESTALE which is the only okay value

    def Empty(self):
        return self.cpu_states[cpu.id()].empty()

    def AssignCpu(self, task):
        self.cpu_k += 1
        l = self.cpus().ToVector()
        if self.cpu_k == len(l): self.cpu_k = 0
        return l[self.cpu_k]

    def Migrate(self, task, cpu, seqnum):
        cs = self.cpu_states[cpu.id()]
        assert cs.channel.AssociateTask(task.gtid, seqnum)
        task.pydata.cpu = cpu.id()
        cs.enqueue(task)
        enclave().GetAgent(cpu).Ping()

    def GetDefaultChannel(self):
        return self.default_channel_

    def TaskNew(self, task, msg):
        attach_data(task)
        payload = cast_payload_new(msg.payload())
        task.seqnum = msg.seqnum()
        if payload.runnable:
            task.pydata.run_state = kRunnable
            self.Migrate(task, AssignCpu(task), msg.seqnum())
        else:
            task.pydata.run_state = kBlocked

    def TaskRunnable(self, task, msg):
        payload = cast_payload_wakeup(msg.payload())
        task.pydata.run_state = kRunnable
        task.pydata.prio_boost = not payload.deferrable
        if task.pydata.cpu < 0:
            self.Migrate(task, AssignCpu(task), msg.seqnum())
        else:
            cpu_state_of(task).pydata.enqueue(task)

    def TaskDeparted(self, task, msg):
        payload = cast_payload_departed(msg.payload())
        if task.pydata.run_state == kOnCpu or payload.from_switchto:
            self.TaskOffCpu(task, False, payload.from_switchto)
        elif task.pydata.run_state == kRunnable:
            cpu_state_of(task).erase(task)

        if payload.from_switchto:
            enclave.GetAgent(ghost.GetCpu(payload.cpu)).Ping()

        allocator().FreeTask(task)

    def TaskDead(self, task, msg):
        payload = cast_payload_dead(msg.payload())
        allocator().FreeTask(task)

    def TaskYield(self, task, msg):
        payload = cast_payload_yield(msg.payload())
        self.TaskOffCpu(task, False, payload.from_switchto)
        cpu_state_of(task).run_queue.enqueue(task)
        if payload.from_switchto:
            enclave.GetAgent(ghost.GetCpu(payload.cpu)).Ping()

    def TaskBlocked(self, task, msg):
        payload = cast_payload_blocked(msg.payload())
        self.TaskOffCpu(task, False, payload.from_switchto)
        if payload.from_switchto:
            enclave.GetAgent(ghost.GetCpu(payload.cpu)).Ping()

    def TaskPreempted(self, task, msg):
        payload = cast_payload_preempt(msg.payload())
        self.TaskOffCpu(task, False, payload.from_switchto)
        task.pydata.preempted = True
        task.pydata.prio_boost = True
        cpu_state_of(task).run_queue.enqueue(task)
        if payload.from_switchto:
            enclave.GetAgent(ghost.GetCpu(payload.cpu)).Ping()

    def TaskSwitchTo(self, task, msg):
        self.TaskOffCpu(task, True, False)

    def ValidatePreExitState(self):
        for cpu in self.cpus().ToVector():
            assert cpu_states[cpu.id()].run_queue.empty()

    def TaskOffCpu(self, task, blocked, from_switchto):
        cs = cpu_state_of(task)
        if task.oncpu():
            cs.current = None
        task.pydata.run_state = kBlocked if blocked else kRunnable

    def TaskOnCpu(self, task, cpu):
        cs = cpu_states[cpu.id()]
        cs.current = task
        task.pydata.run_state = kOnCpu
        task.pydata.cpu = cpu.id()
        task.pydata.preempted = False
        task.pydata.prio_boost = False

    def PySchedule(self, cpu, agent_barrier, prio_boost):
        cs = cpu_states[cpu.id()]
        next_task = None
        if not prio_boost:
            next_task = cs.current
            if next_task is None: next_task = cs.run_queue.dequeue()
        req = enclave().GetRunRequest()

        if next_task is not None:
            while next_task.status_word.on_cpu():
                ghost.Pause()
            opts = ghost.RunRequestOptions()
            opts.target = next_task.gtid
            opts.target_barrier = next_task.seqnum
            opts.agent_barrier = agent_barrier
            opts.commit_flags = COMMIT_AT_TXN_COMMIT
            req.Open(opts)
            if req.Commit():
                self.TaskOnCpu(next_task, cpu)
            else:
                if next_task == cs.current:
                    self.TaskOffCpu(next_task, False, False)
                next_task.pydata.prio_boost = True
                cs.run_queue.enqueue(next_task)
        else:
            flags = 0
            if prio_boost and (cs.current is not None or not cs.run_queue.empty()):
                flags = RTLA_ON_IDLE
            req.LocalYield(agent_barrier, flags)

    def Schedule(self, cpu, agent_sw):
        agent_barrier = agent_sw.barrier()
        cs = cpu_states[cpu.id()]
        msg = ghost.Peek(cs.channel)
        while not msg.empty():
            self.DispatchMessage(msg)
            ghost.Consume(cs.channel, msg)

        PySchedule(cpu, agent_barrier, agent_sw.boosted_priority())


class PyAgent(ghost.LocalAgent):
    def __init__(self, enclave, cpu, scheduler):
        ghost.LocalAgent.__init__(self, enclave, cpu)
        self.scheduler_ = scheduler

    def AgentThread(self):
        print("AgentThread", self.cpu().id())
        self.gtid().assign_name("Agent:"+str(self.cpu().id()))
        self.SignalReady()
        self.WaitForEnclaveReady()
        while not Finished or not scheduler_.Empty(cpu()):
            scheduler_.Schedule(cpu(), status_word())

    def AgentScheduler(self):
        return self.scheduler_

class FullPyAgent(ghost.FullAgent_LocalEnclave_PyAgentConfig_):
    def __init__(self, config):
        ghost.FullAgent_LocalEnclave_PyAgentConfig_.__init__(self, config)
        self.scheduler_ = PyScheduler(self.enclave_, self.enclave_.cpus())
        self.StartAgentTasks()
        self.enclave_.Ready()

    def __del__(self):
        self.scheduler_.ValidatePreExitState()
        self.TerminateAgentTasks()

    def MakeAgent(self, cpu):
        global nurse
        ret = PyAgent(self.enclave_, cpu, self.scheduler_)
        nurse.append(ret)
        return ret

    def RpcHandler(self, req, args, response):
        response.response_code = -1



config = ghost.getConfig();

wrapconfig = ghost.PyWrapAgentConfig(config, (lambda conf: FullPyAgent(conf)))

uap = ghost.AgentProcess_WrapFullAgent_PyWrapAgentConfig_(wrapconfig);

ghost.Ghost.InitCore()

print("Running")

input()

print("Shutting down")

del uap

print("Done!")
