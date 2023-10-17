#include "engineer.h"
#include <iostream>

Engineer::Engineer(int id, const std::string &name, double salary, const std::string &lvl)
: Employee (id, name, salary), m_level(lvl)
{
}

Engineer::~Engineer()
{
}

void Engineer::display() const
{
    Employee::display();
    std::cout << "Level: "<<m_level <<std::endl;
}

double Engineer::calculateBonus() const
{
    return Employee::getSalary() *0.1;
}
