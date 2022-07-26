print("Python is starting.")

from libpyfifo2_bind import *
print("Importing bindings: OK")

print("Topology:", ", ".join((str([s.id() for s in c.siblings().ToVector()]) for c in ghost.GetTopoCpuList().ToVector())))

nurse = []

class CpuState:
    def __init__(self, chan):
        self.chan = chan
        self.task = None
        self.rq = None

class PyScheduler(ghost.BasicDispatchScheduler_PyTask_):
    def __init__(self, enclave, cpulist):
        self.allocator_ = ghost.ThreadSafeMallocTaskAllocator_PyTask_()
        ghost.BasicDispatchScheduler_PyTask_.__init__(self, enclave, cpulist, self.allocator_)
        self.cpu_states = []
        for cpu in self.cpus().ToVector():
            node = 0
            self.cpu_states.append(CpuState(ghost.LocalChannel(ghost.GHOST_MAX_QUEUE_ELEMS, node, ghost.SingleCpu(cpu))))
        self.default_channel_ = self.cpu_states[0].chan

    def EnclaveReady(self):
        pass

    def GetDefaultChannel(self):
        return self.default_channel_

    def TaskNew(self, task, msg):
        pass

    def TaskRunnable(self, task, msg):
        pass

    def TaskDeparted(self, task, msg):
        pass

    def TaskDead(self, task, msg):
        pass

    def TaskYield(self, task, msg):
        pass

    def TaskBlocked(self, task, msg):
        pass

    def TaskPreempted(self, task, msg):
        pass

    def CpuNotIdle(self, msg):
        pass #nop

    def CpuTimerExpired(self, msg):
        pass #nop

    def Empty(self):
        pass




class PyAgent(ghost.LocalAgent):
    def __init__(self, enclave, cpu, scheduler):
        ghost.LocalAgent.__init__(self, enclave, cpu)
        self.scheduler_ = scheduler

    def AgentThread(self):
        print("AgentThread", self.cpu().id())
        self.SignalReady()
        import time; time.sleep(5)

    def AgentScheduler(self):
        return self.scheduler_

class FullPyAgent(ghost.FullAgent_LocalEnclave_PyAgentConfig_):
    def __init__(self, config):
        ghost.FullAgent_LocalEnclave_PyAgentConfig_.__init__(self, config)
        self.scheduler_ = PyScheduler(self.enclave_, self.enclave_.cpus())
        self.StartAgentTasks()

    def MakeAgent(self, cpu):
        global nurse
        ret = PyAgent(self.enclave_, cpu, self.scheduler_)
        nurse.append(ret)
        return ret

config = ghost.getConfig();

wrapconfig = ghost.PyWrapAgentConfig(config, (lambda conf: FullPyAgent(conf)))

uap = ghost.AgentProcess_WrapFullAgent_PyWrapAgentConfig_(wrapconfig);

print("Running")

input()

print("Shutting down")

del uap

print("Done!")
