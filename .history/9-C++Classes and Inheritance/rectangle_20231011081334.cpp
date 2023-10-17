#include "rectangle.h"


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

    
}
Rectangle::~Rectangle()
{
}
