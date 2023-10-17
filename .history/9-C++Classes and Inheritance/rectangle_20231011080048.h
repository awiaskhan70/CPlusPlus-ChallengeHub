#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
private:
    std::string m_name;
    double m_length;
    double m_width;
public:
    Rectangle(const std::string& name, double length , double width);
    double area() const override;
    double perimeter() const override;
    void display() const override;
    ~Rectangle ();
};

#endif