print("Python is starting.")

from libpyfifo2_bind import *

print("Importing bindings: OK")

print([[s.id() for s in c.siblings().ToVector()] for c in ghost.GetTopoCpuList().ToVector()])

class PyScheduler(ghost.BasicDispatchScheduler_PyTask_):
    pass

class PyAgent(ghost.LocalAgent):
    pass

class FullPyAgent(ghost.FullAgent_LocalEnclave_PyAgentConfig_):
    pass

config = ghost.getConfig();

#wrapconfig = ghost.PyWrapAgentConfig(config, (lambda conf: return ))

#uap = ghost.AgentProcess_WrapFullAgent_PyWrapAgentConfig_
