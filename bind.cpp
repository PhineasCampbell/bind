#include <iostream>
#include <cmath>
//#include "pybind11\pybind.h"
#include "pybind11\pybind11.h"

int add(int i, int j) {
    return i + j;
}

PYBIND11_MODULE(example, m, py::mod_gil_not_used()) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");
}

int main() {
	double d = 2.6;
	double x = 0.0;
	x = sqrt(d);
    std::cout << "Hello World!"  << std::endl;
	std::cout << x << std::endl;
    return 0;
}
