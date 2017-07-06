#include "hello.hpp"
#include <Python.h>
#include <boost/python.hpp>
using namespace boost::python;

BOOST_PYTHON_MODULE(hello) {
    class_<World>("World", init<std::string>())
        .def("greet", &World::greet)
        .def("set", &World::set);
}
