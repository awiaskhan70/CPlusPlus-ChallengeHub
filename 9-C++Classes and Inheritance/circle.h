#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
class Circle : public Shape
{
private:
    double m_radius;
public:
    Circle(const std::string& name, double radius);
    ~Circle ();
    double area() const override;
    double perimeter() const override;
    void display() const override;

};
#endif
