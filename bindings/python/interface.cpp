#include <pybind11/pybind11.h>
namespace py = pybind11;

#include "lib/agent.h"

namespace ghost {

PyAgentConfig::PyAgentConfig(AgentConfig ag, py::object dat) : data(dat) {
  *this = ag;
}

PyWrapAgentConfig::PyWrapAgentConfig(PyAgentConfig conf, MAKEFULLAGENT_T cons) : config(conf), mfa(cons) {}
  
FULLAGENTPTR_T PyWrapAgentConfig::make() {
  return mfa(config);
}

WrapFullAgent::WrapFullAgent(PyWrapAgentConfig wconfig) {
  py_agent = wconfig.make();
}

void WrapFullAgent::RpcHandler(int64_t req, const AgentRpcArgs& args, AgentRpcResponse& response) {
  py_agent->RpcHandler(req, args, response);
}

} // namespace ghost
