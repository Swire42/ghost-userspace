#pragma once

#include <pybind11/pybind11.h>
namespace py = pybind11;

#include "lib/agent.h"

namespace ghost {

struct PyTask : public Task {
  py::object data;
};

class PyAgentConfig : AgentConfig {
  py::object data;

  PyAgentConfig(AgentConfig ag, py::object dat);
};

#define FULLAGENT_T FullAgent<LocalEnclave, PyAgentConfig>
#define FULLAGENTPTR_T std::unique_ptr< FULLAGENT_T >
#define MAKEFULLAGENT_T std::function < FULLAGENTPTR_T (PyAgentConfig) >

class PyWrapAgentConfig {
  PyAgentConfig config;
  MAKEFULLAGENT_T mfa;

 public:
  PyAgentConfig(PyAgentConfig conf, MAKEFULLAGENT_T cons);
  
  FULLAGENTPTR_T make();
};

class WrapFullAgent {
  FULLAGENTPTR_T py_agent;

  WrapFullAgent(PyWrapAgentConfig wconfig);

  void RpcHandler(int64_t req, const AgentRpcArgs& args, AgentRpcResponse& response);
};

} // namespace ghost
