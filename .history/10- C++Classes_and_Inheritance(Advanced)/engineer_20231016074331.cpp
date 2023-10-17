#include "engineer.h"

Engineer::Engineer(int id, const std::string &name, double salary, const std::string &lvl)
: Employee (id, name, salary), m_level(lvl)
{
}