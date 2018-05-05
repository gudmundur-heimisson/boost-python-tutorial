#include "hello.hpp"
#include <Python.h>
#include <boost/python.hpp>

namespace py = boost::python;

BOOST_PYTHON_MODULE(hello) {
    py::class_<World>("World")
        .def(py::init<std::string>())
        .def("greet", &World::greet)
        .def("set", &World::set);
}
