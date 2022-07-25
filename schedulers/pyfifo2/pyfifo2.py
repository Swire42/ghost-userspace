print("Python is starting.")

from libpyfifo2_bind import *

print("Importing bindings: OK")

print([[s.id() for s in c.siblings().ToVector()] for c in ghost.GetTopoCpuList().ToVector()])

class PyScheduler(ghost.BasicDispatchScheduler_PyTask_):
    pass

class PyAgent(ghost.LocalAgent):
    pass

class FullPyAgent(ghost.FullAgent_LocalEnclave_PyAgentConfig_):
    def __init__(self, config):
        ghost.FullAgent_LocalEnclave_PyAgentConfig_.__init__(self, config)
        print("Coucou toi")

    def __del__(self):
        print("Boobye")

config = ghost.getConfig();

wrapconfig = ghost.PyWrapAgentConfig(config, (lambda conf: FullPyAgent(conf)))

uap = ghost.AgentProcess_WrapFullAgent_PyWrapAgentConfig_(wrapconfig);

input()

del uap

print("Done!")
