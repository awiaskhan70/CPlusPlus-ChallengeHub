#ifndef ENGINEER_H
#define ENGINEER_H
#include "employee.h"
#include <string>

class Engineer : public Employee
{
private:
    std::string m_level;
public:
    Engineer(int id, const std::string& name, double salary, const std::string& lvl);

    ~Engineer();
};

#endif