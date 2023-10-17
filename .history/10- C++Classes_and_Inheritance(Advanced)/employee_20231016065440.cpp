#include "employee.h"
#include <iostream>
Employee::Employee(int id, const std::string& name, double salary) : m_id(id), m_name(name), m_salary(salary)
{

}
void Employee::display() const
{
}
void Employee::display()
{
    std::cout <<"Employee ID: "<< m_id <<std::endl;
    std::cout << "Name: "<< m_name <<std::endl;
    std::cout <<"Salary: $"<< m_salary << std::endl;
}