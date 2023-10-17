#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
private:
    /* data */
public:
    Shape(const std::string& name);
    ~Shape();
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
protected:
    std::string m_name;
};

#endif