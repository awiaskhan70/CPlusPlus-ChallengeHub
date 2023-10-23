#include "bicycle.h"

Bicycle::Bicycle(const std::string &make, int year, const std::string &type, int numGears) : Vehicle(make,year), m_type(type), m_numGears(numGears)
{

}

void Bicycle::pedal() const
{
     std::cout << "Bicycle is being pedaled." << std::endl;
}

void Bicycle::brake() const
{
    std::cout << "Bicycle is being braked." << std::endl;
}

void Bicycle::displayInfo() const
{
    Vehicle::displayInfo();
    std::cout << "Type: " << m_type << std::endl;
    std::cout << "Number of Gears: " << m_numGears << std::endl;
}

Bicycle::~Bicycle()
{
}
