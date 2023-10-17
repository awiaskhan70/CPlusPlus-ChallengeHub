#include <iostream>
#include "employee.h"
#include "manager.h"
#include "engineer.h"

int main(){

Employee emp_staff(1 , "Jhone Doe" , 5000);
Manager manager_sale(2, "Waqas ", 75000, "Sales");
Engineer engineer_sr(3, "Awais Khan", 10000, "Senior");

std::cout << "Employee Details:" <<std::endl;
emp_staff.display();

    std::cout << "Bonus: $" << emp_staff.calculateBonus() << std::endl << std::endl;

    std::cout << "Manager Details:" << std::endl;
    manager_sale.display();
    std::cout << "Bonus: $" << manager_sale.calculateBonus() << std::endl << std::endl;

    std::cout << "Engineer Details:" << std::endl;
    engineer_sr.display();
    std::cout << "Bonus: $" << engineer_sr.calculateBonus() << std::endl;

    return 0;

}
