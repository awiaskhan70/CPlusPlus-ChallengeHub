#include "shape.h"
#include <iostream>
Shape::Shape(const std::string &name)
{
}

Shape::~Shape()
{
}

double Shape::area() const
{
    return 0.0;
}

double Shape::perimeter() const
{
    return 0.0;
}

void Shape::display() const
{
    std::cout << "Shape: " << m_name << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;

}
