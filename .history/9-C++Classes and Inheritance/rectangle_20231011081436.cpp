#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(const std::string &name, double length, double width)
:Shape(name),m_length(length), m_width(width)
{
}
double Rectangle::area() const
{
    return m_length * m_width;
}
double Rectangle::perimeter() const
{
    return 2 *(m_length + m_width);
}
void Rectangle::display() const
{
    std::cout << "Shape: " << m_name << std::endl;
    std::cout << "Length: " << m_length << std::endl;
    std::cout << "Width: " << m_width << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;

}
Rectangle::~Rectangle()
{
}
