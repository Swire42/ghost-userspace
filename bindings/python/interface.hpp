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

  py::object pydata;
};

class PyAgentConfig : public AgentConfig {
 public:
  py::object pydata;
};

#define FULLAGENT_T py::object//FullAgent<LocalEnclave, PyAgentConfig>
#define MAKEFULLAGENT_T std::function < FULLAGENT_T (PyAgentConfig) >

class PyWrapAgentConfig : public AgentConfig {
  PyAgentConfig config;
  MAKEFULLAGENT_T mfa;

 public:
  PyWrapAgentConfig(PyAgentConfig conf, MAKEFULLAGENT_T cons);
  
  FULLAGENT_T make();
};

class WrapFullAgent {
 public:
  py::object py_agent;

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

CpuList SingleCpu(Cpu const&);

Cpu GetCpu(int cpu);

const ghost_msg_payload_task_new* cast_payload_new(void* payload);
const ghost_msg_payload_task_wakeup* cast_payload_wakeup(void* payload);
const ghost_msg_payload_task_departed* cast_payload_departed(void* payload);
const ghost_msg_payload_task_dead* cast_payload_dead(void* payload);
const ghost_msg_payload_task_yield* cast_payload_yield(void* payload);
const ghost_msg_payload_task_blocked* cast_payload_blocked(void* payload);
const ghost_msg_payload_task_preempt* cast_payload_preempt(void* payload);

} // namespace ghost
