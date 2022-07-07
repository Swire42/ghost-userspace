#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
namespace py = pybind11;

#include "fifo_agent.h"


PYBIND11_MODULE(libpyfifo2_bind, PB__m) {
  PB__m.def("main_cpp", &main_cpp);
}

