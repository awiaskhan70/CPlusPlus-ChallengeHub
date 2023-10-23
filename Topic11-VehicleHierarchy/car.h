#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include <string>
#include <iostream>

class Car : public Vehicle
{
private:
    std::string m_model;
    std::string m_fuelType;
public:
    Car(const std::string& make, int year, const std::string& model, const std::string& fuelType);
    void accelerate() const;
    void brake() const;
    void displayInfo()const override;
    ~Car();
};

#endif