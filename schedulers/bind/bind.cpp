#include "lib/agent.h"
#include "lib/scheduler.h"
#include "lib/enclave.h"
#include "lib/topology.h"

class AgentWrapperConfig {
  AgentConfig config;
};

template <class EnclaveType>
class AgentWrapper : public FullAgent<EnclaveType> {
 public:
  explicit AgentWrapper(AgentWrapperConfig config) : FullAgent(config.config) {
    
  }
};
