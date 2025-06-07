from pybind11.setup_helpers import Pybind11Extension, build_ext
from setuptools import setup
from pybind11 import get_include


ext_modules = [
    Pybind11Extension(
        "mymath",                                # Имя модуля
        ["src/bindings.cpp", "src/mymath.cpp"],  # Исходники
        define_macros=[("VERSION_INFO", "0.0.1")]
    ),
]

include_dirs=[
    get_include(),
    "include",  # если mymath.hpp лежит в include/
]

setup(
    name="mymath",
    version="0.0.1",
    author="rokokol",
    description="C++ библиотека с pybind11",
    ext_modules=ext_modules,
    cmdclass={"build_ext": build_ext},
    zip_safe=False,
)
