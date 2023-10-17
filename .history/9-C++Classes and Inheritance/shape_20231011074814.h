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
    virtual double parimeter() const;
    void display() const;
protected:
    std::string m_name;
};