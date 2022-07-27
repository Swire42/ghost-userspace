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
    def __del__(self):
        print("DEL!")

def attach_data(task):
    if type(task.pydata) is not TaskData:
        task.pydata = TaskData()

class CpuState:
    def __init__(self, chan):
        self.current = None
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
        if self.empty(): return None
        task = self.run_queue.popleft()
        task.pydata.run_state = kRunnable
        return task

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

    def cpu_state_of(self, task):
        return self.cpu_states[task.pydata.cpu]

    def Schedule(self):
        pass

    def EnclaveReady(self):
        for cpu in self.cpus().ToVector():
            cs = self.cpu_states[cpu.id()]
            agent = self.enclave().GetAgent(cpu)
            while not cs.channel.AssociateTask2(agent.gtid(), agent.barrier()):
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
        assert cs.channel.AssociateTask2(task.gtid, seqnum)
        task.pydata.cpu = cpu.id()
        cs.enqueue(task)
        self.enclave().GetAgent(cpu).Ping()

    def GetDefaultChannel(self):
        return self.default_channel_

    def TaskNew(self, task, msg):
        print("new")
        attach_data(task)
        payload = ghost.cast_payload_new(msg.payload())
        task.seqnum = msg.seqnum()
        if payload.runnable:
            task.pydata.run_state = kRunnable
            self.Migrate(task, self.AssignCpu(task), msg.seqnum())
        else:
            task.pydata.run_state = kBlocked

    def TaskRunnable(self, task, msg):
        print("runnable")
        payload = ghost.cast_payload_wakeup(msg.payload())
        task.pydata.run_state = kRunnable
        task.pydata.prio_boost = not payload.deferrable
        if task.pydata.cpu < 0:
            self.Migrate(task, self.AssignCpu(task), msg.seqnum())
        else:
            self.cpu_state_of(task).pydata.enqueue(task)

    def TaskDeparted(self, task, msg):
        print("departed")
        payload = ghost.cast_payload_departed(msg.payload())
        if task.pydata.run_state == kOnCpu or payload.from_switchto:
            self.TaskOffCpu(task, False, payload.from_switchto)
        elif task.pydata.run_state == kRunnable:
            self.cpu_state_of(task).erase(task)

        if payload.from_switchto:
            self.enclave().GetAgent(ghost.GetCpu(payload.cpu)).Ping()

        self.allocator().FreeTask(task)

    def TaskDead(self, task, msg):
        print("dead")
        payload = ghost.cast_payload_dead(msg.payload())
        self.allocator().FreeTask(task)

    def TaskYield(self, task, msg):
        print("yield")
        payload = ghost.cast_payload_yield(msg.payload())
        self.TaskOffCpu(task, False, payload.from_switchto)
        self.cpu_state_of(task).enqueue(task)
        if payload.from_switchto:
            self.enclave().GetAgent(ghost.GetCpu(payload.cpu)).Ping()

    def TaskBlocked(self, task, msg):
        print("blocked")
        payload = ghost.cast_payload_blocked(msg.payload())
        self.TaskOffCpu(task, False, payload.from_switchto)
        if payload.from_switchto:
            self.enclave().GetAgent(ghost.GetCpu(payload.cpu)).Ping()

    def TaskPreempted(self, task, msg):
        print("preempt")
        payload = ghost.cast_payload_preempt(msg.payload())
        self.TaskOffCpu(task, False, payload.from_switchto)
        task.pydata.preempted = True
        task.pydata.prio_boost = True
        self.cpu_state_of(task).enqueue(task)
        if payload.from_switchto:
            self.enclave().GetAgent(ghost.GetCpu(payload.cpu)).Ping()

    def TaskSwitchTo(self, task, msg):
        self.TaskOffCpu(task, True, False)

    def ValidatePreExitState(self):
        for cpu in self.cpus().ToVector():
            assert self.cpu_states[cpu.id()].empty()

    def TaskOffCpu(self, task, blocked, from_switchto):
        cs = self.cpu_state_of(task)
        if task.pydata.run_state == kOnCpu:
            cs.current = None
        task.pydata.run_state = kBlocked if blocked else kRunnable

    def TaskOnCpu(self, task, cpu):
        cs = self.cpu_states[cpu.id()]
        cs.current = task
        task.pydata.run_state = kOnCpu
        task.pydata.cpu = cpu.id()
        task.pydata.preempted = False
        task.pydata.prio_boost = False

    def PySchedule(self, cpu, agent_barrier, prio_boost):
        cs = self.cpu_states[cpu.id()]
        next_task = None
        if not prio_boost:
            next_task = cs.current
            if next_task is None: next_task = cs.dequeue()
        req = self.enclave().GetRunRequest(cpu)

        if next_task is not None:
            while next_task.status_word.on_cpu():
                ghost.Pause()
            opts = ghost.RunRequestOptions()
            opts.target = next_task.gtid
            opts.target_barrier = next_task.seqnum
            opts.agent_barrier = agent_barrier
            opts.commit_flags = ghost.COMMIT_AT_TXN_COMMIT
            req.Open(opts)
            if req.Commit():
                self.TaskOnCpu(next_task, cpu)
            else:
                if next_task == cs.current:
                    self.TaskOffCpu(next_task, False, False)
                next_task.pydata.prio_boost = True
                cs.enqueue(next_task)
        else:
            flags = 0
            if prio_boost and (cs.current is not None or not cs.empty()):
                flags = ghost.RTLA_ON_IDLE
            req.LocalYield(agent_barrier, flags)

    def Schedule(self, cpu, agent_sw):
        print("schedule")
        agent_barrier = agent_sw.barrier()
        cs = self.cpu_states[cpu.id()]
        print(cpu.id(), "peek")
        msg = ghost.Peek(cs.channel)
        print(cpu.id(), "peeked")
        while not msg.empty():
            print(cpu.id(), "msg", msg.describe_type())
            #import time; time.sleep(1)
            self.DispatchMessage(msg)
            ghost.Consume(cs.channel, msg)
            print(cpu.id(), "consummed")
            msg = ghost.Peek(cs.channel)

        self.PySchedule(cpu, agent_barrier, agent_sw.boosted_priority())


class PyAgent(ghost.LocalAgent):
    def __init__(self, enclave, cpu, scheduler):
        ghost.LocalAgent.__init__(self, enclave, cpu)
        self.scheduler_ = scheduler

    def AgentThread(self):
        print("AgentThread", self.cpu().id())
        self.gtid().assign_name("Agent:"+str(self.cpu().id()))
        self.SignalReady()
        print("signal ready")
        self.WaitForEnclaveReady()
        print("enclave ready")
        while not self.Finished() or not scheduler_.Empty(cpu()):
            self.scheduler_.Schedule(self.cpu(), self.status_word())
        print("Thread exit")

    def AgentScheduler(self):
        return self.scheduler_

class FullPyAgent(ghost.FullAgent_LocalEnclave_PyAgentConfig_):
    def __init__(self, config):
        ghost.FullAgent_LocalEnclave_PyAgentConfig_.__init__(self, config)
        self.scheduler_ = PyScheduler(self.enclave_, self.enclave_.cpus())
        print("=======1")
        self.StartAgentTasks()
        print("=======2")
        self.enclave_.Ready()
        print("=======3")

    def __del__(self):
        print("oskour")
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
