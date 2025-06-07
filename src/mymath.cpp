#include "../include/mymath.hpp"
#include <cmath>

double add(double a, double b) {
    return a + b;
}

double Point::norm() const {
    return std::sqrt(x*x + y*y);
}
