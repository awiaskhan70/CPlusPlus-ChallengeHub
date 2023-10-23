#include "vehicle.h"

Vehicle::Vehicle(const std::string &make, int year): m_make(make), m_year(year)
{
}
void Vehicle::start() const
{
    std::cout << "Vehicle is starting"<< std::endl;
}

void Vehicle::stop() const
{
        std::cout << "Vehicle is Stoping"<< std::endl;
}

void Vehicle::displayInfo() const
{
        std::cout << "Vehicle Make: "<< m_make << std::endl;
        std::cout << "Vehicle Year: "<< m_year << std::endl;
}

Vehicle::~Vehicle()
{
}

