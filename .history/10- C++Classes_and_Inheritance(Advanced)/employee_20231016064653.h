#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string.h>

class Employee
{
private:
    int m_id;
    std::string m_name;
    
public:
    Employee(/* args */);
    ~Employee();
};

Employee::Employee(/* args */)
{
}

Employee::~Employee()
{
}

#endif