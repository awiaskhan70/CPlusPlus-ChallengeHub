#ifndef MANAGER_H
#define MANAGER_H
#include "employee.h"
#include <string>

class Manager : public Employee
{
private:
    std::string m_department;
public:
    Manager(int id, const std::string& name, double salary, const std::string& dept);
    void display() const override;
    double calculateBonus() const override;
    ~Manager();
};

#endif
