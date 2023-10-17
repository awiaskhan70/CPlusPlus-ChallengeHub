#include "circle.h"
#include <iostream>
const double PI = 3.14159265358979323846;

Circle::Circle(const std::string &name, double radius)
: Shape(name) , m_radius(radius)
{
}

Circle::~Circle()
{
}

double Circle::area() const
{
    return PI * m_radius * m_radius;
}

double Circle::perimeter() const
{
    return 2 * PI * m_radius;
}

void Circle::display() const
{
    std::cout << "Shape: " << m_name << std::endl;
    std::cout << "Radius: " << m_radius << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;
}
