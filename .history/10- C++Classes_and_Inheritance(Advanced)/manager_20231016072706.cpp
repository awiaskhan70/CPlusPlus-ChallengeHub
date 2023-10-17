#include "manager.h"

Manager::Manager(int id, const std::string &name, double salary, const std::string &dept)
: Employee(id,name,salary), m_department(dept)
{
}
void Manager::display const {
Employee::display();
std::cout <<"Department: "<< m_de

}