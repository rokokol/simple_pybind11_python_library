#include <pybind11/pybind11.h>
#include "../include/mymath.hpp"
// #include "mymath.hpp"

namespace py = pybind11;

PYBIND11_MODULE(mymath, m) {
    m.doc() = "Простая библиотека mymath";
    m.def("add", &add, "Сложение двух чисел");

    py::class_<Point>(m, "Point")
        .def(py::init<double, double>(), "Конструктор Point(x, y)")
        .def("norm", &Point::norm, "Евклидова норма");
}
