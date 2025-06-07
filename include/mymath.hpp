#ifndef MYMATH_HPP
#define MYMATH_HPP

struct Point {
    double x, y;
    Point(double x_, double y_) : x(x_), y(y_) {}
    double norm() const;
};

double add(double a, double b);

#endif // MYMATH_HPP
