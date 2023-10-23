#ifndef VEHICLE_H
#define VEHICLE_H
#include <string.h>
#include <iostream>

class Vehicle
{
private:
    std::string m_make;
    int m_year;
public:
    Vehicle(const std::string& make, int year);
    virtual void start() const;
    virtual void stop() const;
    virtual void displayInfo() const;
    ~Vehicle();
};

#endif