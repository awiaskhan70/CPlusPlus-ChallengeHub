#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
private:
    int m_id;
    std::string m_name;
    double m_salary;
    
public:
    Employee(int id , const std::string& name, double salary);
    virtual void display() const;
    virtual void calculateBonus() const;
    ~Employee();
};

#endif