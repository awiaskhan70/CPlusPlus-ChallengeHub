#ifndef BICYCLE_H
#define BICYCLE_H

#include "vehicle.h"

class Bicycle : public Vehicle
{
private:
    std::string m_type;
    int m_numGears;
public:
    Bicycle(const std::string & make, int year, const std::string& type, int numGears);
    void pedal() const;
    void brake() const;
    void displayInfo() const override;
    ~Bicycle();
};

#endif