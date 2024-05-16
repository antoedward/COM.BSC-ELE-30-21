#ifndef SHAPE_H
#define SHAPE_H

namespace shapes {
    class Square {
    private:
        double Sidelength;
    public:
        Square();
        Square(double Side);
        double getSideLength() const;
        ~Square();
    };

    class Triangle {
    private:
        double Base;
        double Height;
    public:
        Triangle();
        Triangle(double Base, double Height);
        double getBase() const;
        double getHeight() const;
        ~Triangle();
    };

    class Circle {
    private:
        double radius;
    public:
        Circle();
        Circle(double radius);
        double getRadius() const;
        ~Circle();
    };
}

#endif
   