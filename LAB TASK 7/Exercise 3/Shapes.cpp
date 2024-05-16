#include "shapes.h"

namespace shapes {
    Square::Square() : Sidelength(0) {}

    Square::Square(double Side) : Sidelength(Side) {}

    double Square::getSideLength() const {
        return Sidelength;
    }

    Square::~Square() {}

    Triangle::Triangle() : Base(0), Height(0) {}

    Triangle::Triangle(double b, double h) : Base(b), Height(h) {}

    double Triangle::getBase() const {
        return Base;
    }

    double Triangle::getHeight() const {
        return Height;
    }

    Triangle::~Triangle() {}

    Circle::Circle() : radius(0) {}

    Circle::Circle(double r) : radius(r) {}

    double Circle::getRadius() const {
        return radius;
    }

    Circle::~Circle() {}
}
