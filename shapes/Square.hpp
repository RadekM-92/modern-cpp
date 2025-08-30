#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(double x);
    Square(const Square & other) = default;
    Square() = delete;

    double getArea() const override;
    double getPerimeter() const override;
    void print() const override;

private:
};
