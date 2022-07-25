#pragma once

#include <pybind11/pybind11.h>
namespace py = pybind11;

#include "lib/agent.h"
#include "lib/scheduler.h"

namespace ghost {

struct PyTask : public Task<LocalStatusWord> {
  PyTask(Gtid fifo_task_gtid, ghost_sw_info sw_info)
    : Task<>(fifo_task_gtid, sw_info) {}
  ~PyTask() override {}
  //py::object data;
};

class PyAgentConfig : public AgentConfig {
 public:
  //py::object data;
};

#define FULLAGENT_T FullAgent<LocalEnclave, PyAgentConfig>
#define MAKEFULLAGENT_T std::function < FULLAGENT_T* (PyAgentConfig) >

class PyWrapAgentConfig : public AgentConfig {
  PyAgentConfig config;
  MAKEFULLAGENT_T mfa;

 public:
  PyWrapAgentConfig(PyAgentConfig conf, MAKEFULLAGENT_T cons);
  
  FULLAGENT_T* make();
};

class WrapFullAgent {
 public:
  std::unique_ptr<FULLAGENT_T> py_agent;

  WrapFullAgent(PyWrapAgentConfig wconfig);

  void RpcHandler(int64_t req, const AgentRpcArgs& args, AgentRpcResponse& response);
};

extern template struct Task<LocalStatusWord>;
extern template class TaskAllocator<PyTask>;
extern template class SingleThreadMallocTaskAllocator<PyTask>;
extern template class ThreadSafeMallocTaskAllocator<PyTask>;
extern template class BasicDispatchScheduler<PyTask>;
extern template class AgentProcess<WrapFullAgent, PyWrapAgentConfig>;
extern template class FullAgent<LocalEnclave, PyAgentConfig>;

CpuList GetTopoCpuList();

PyAgentConfig getConfig();
} // namespace ghost
