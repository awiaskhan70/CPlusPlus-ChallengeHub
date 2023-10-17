#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

int main() {
    Rectangle rectangle("Rectangle", 5.0, 3.0);
    Circle circle("Circle", 4.0);

    rectangle.display();
    std::cout << std::endl;
    circle.display();

    return 0;
}
