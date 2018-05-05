#include "hello.hpp"
#include <Python.h>
#include <boost/python.hpp>

namespace py = boost::python;

struct BaseWrap : Base, py::wrapper<Base>
{
    std::string fun() 
    {
        return this->get_override("fun")();
    }
};

BOOST_PYTHON_MODULE(hello) {
    py::class_<World>("World")
        .def(py::init<std::string>())
        .def("greet", &World::greet)
        .def("set", &World::set);

    py::class_<Var>("Var", py::init<std::string>())
        .def_readonly("name", &Var::name)
        .def_readwrite("value", &Var::value);

    py::class_<Num>("Num", py::init<float>())
        .add_property("rovalue", &Num::get)
        .add_property("value", &Num::get, &Num::set);

    py::class_<BaseWrap, boost::noncopyable>("Base")
        .def("fun", py::pure_virtual(&Base::fun));

    py::class_<Derived, py::bases<Base> >("Derived");

    py::def("factory", factory, py::return_value_policy<py::manage_new_object>());

    py::def("doFunBase", doFunBase);

    py::def("doFunDerived", doFunDerived);
}
