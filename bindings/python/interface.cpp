#include "interface.hpp"

#include <pybind11/pybind11.h>
namespace py = pybind11;

#include "lib/agent.h"

namespace ghost {

PyWrapAgentConfig::PyWrapAgentConfig(PyAgentConfig confif, MAKEFULLAGENT_T cons) : config(confif), mfa(cons) {}

FULLAGENT_T PyWrapAgentConfig::make() {
  return mfa(config);
}

WrapFullAgent::WrapFullAgent(PyWrapAgentConfig wconfig) : py_agent(wconfig.make()) {
}

void WrapFullAgent::RpcHandler(int64_t req, const AgentRpcArgs& args, AgentRpcResponse& response) {
  py_agent.attr("RpcHandler")(req, args, response);
}

template struct Task<LocalStatusWord>;
template class TaskAllocator<PyTask>;
template class SingleThreadMallocTaskAllocator<PyTask>;
template class ThreadSafeMallocTaskAllocator<PyTask>;
template class BasicDispatchScheduler<PyTask>;
template class AgentProcess<WrapFullAgent, PyWrapAgentConfig>;
template class FullAgent<LocalEnclave, PyAgentConfig>;

CpuList GetTopoCpuList() {
  return MachineTopology()->all_cores();
}

PyAgentConfig getConfig() {
  PyAgentConfig config;
  Topology* topology = MachineTopology();

  config.topology_ = topology;
  config.cpus_ = topology->all_cpus();

  return config;
}

CpuList SingleCpu(Cpu const& cpu) {
  return MachineTopology()->ToCpuList({cpu});
}

} // namespace ghost
