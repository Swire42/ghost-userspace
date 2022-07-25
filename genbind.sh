#!/bin/bash

~/cppast-pybind/bind/bind -I ~/ghost-userspace -I ~/ghost-userspace/bazel-ghost-userspace/external/com_google_absl/ --std=c++17 lib/agent.h lib/base.h lib/channel.h lib/enclave.h lib/ghost.h lib/logging.h lib/scheduler.h lib/topology.h | less
