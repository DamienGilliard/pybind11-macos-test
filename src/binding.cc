#include<pybind11/pybind11.h>
#include"root.hh"

namespace py = pybind11;

PYBIND11_MODULE(dummy_module, m)
{
    m.doc() = "Dummy module for testing pybind11";
    
    py::class_<dummyNamespace::SmallClass>(m, "SmallClass")
        .def(py::init<int>(), py::arg("integer"))
        .def_readwrite("integer", &dummyNamespace::SmallClass::integer)
        .def("publicMethod", &dummyNamespace::SmallClass::PublicMethod, py::arg("integer"));
}