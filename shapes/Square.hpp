#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(double x);
    Square(const Square & other) = default;
    Square() = delete;

    double getArea();
    double getPerimeter();
    void print();

private:
};
