#include "vehicle.h"
#include "car.h"
#include "bicycle.h"

int main(){

Vehicle generic("Generic", 2022);
Car sportsCar("Ford",2022, "Mountain", "Gasoline");
Bicycle mountainBike("Trek", 2022, "Mountain",21);

    // Demonstrate vehicle methods
    generic.start();
    generic.displayInfo();
    generic.stop();

    std::cout << std::endl;

    sportsCar.start();
    sportsCar.displayInfo();
    sportsCar.accelerate();
    sportsCar.brake();
    sportsCar.stop();

    std::cout << std::endl;

    mountainBike.start();
    mountainBike.displayInfo();
    mountainBike.pedal();
    mountainBike.brake();
    mountainBike.stop();

    return 0;

}