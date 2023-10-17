#include "employee.h"
#include <iostream>
Employee::Employee(int id, const std::string& name, double salary) : m_id(id), m_name(name), m_salary(salary)
{

}
void Employee::display() const
{
    std::cout <<"Employee ID: "<< m_id <<std::endl;
    std::cout << "Name: "<< m_name <<std::endl;
    std::cout <<"Salary: $"<< m_salary << std::endl;
}
double Employee::calculateBonus() const{

    return 0.0;
}
double Employee::getSalary() const {
    return m_salary;
}
