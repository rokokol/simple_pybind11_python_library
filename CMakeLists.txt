cmake_minimum_required(VERSION 3.14)
project(simple_pybind11_python_library)

set(CMAKE_CXX_STANDARD 23)
add_subdirectory(external/pybind11)

include_directories(include)
add_library(mymath_core src/mymath.cpp)
target_link_libraries(mymath_core PRIVATE )

pybind11_add_module(simple_pybind11_python_library src/bindings.cpp)
target_link_libraries(simple_pybind11_python_library PRIVATE mymath_core)
