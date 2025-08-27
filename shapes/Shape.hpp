#pragma once

#include "Color.hpp"

class Shape
{
private:
    Color color_ = Color::RED;

public:
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
};
