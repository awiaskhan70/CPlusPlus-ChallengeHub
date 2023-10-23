#include "car.h"

Car::Car(const std::string &make, int year, const std::string &model, const std::string &fuelType) : Vehicle(make,year),m_model(model),m_fuelType(fuelType)
{
}

void Car::accelerate() const
{
    std::cout << "Car is accelerating." << std::endl;
}

void Car::brake() const
{
    std::cout << "Car is Braking." << std::endl;
}

void Car::displayInfo() const
{
    Vehicle::displayInfo();
    std::cout << "CAR Model: "<< m_model << std::endl;
    std::cout << "Fuel Type: "<< m_fuelType << std::endl;
}

Car::~Car()
{
}
