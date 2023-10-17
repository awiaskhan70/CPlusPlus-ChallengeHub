#include <iostream>
#include "student.h"

int main(){

const int numStudents = 5;
student students[numStudents];

    // Prompt the user to input data for each student
    for (int i = 0; i < numStudents; i++) {
        int id;
        std::string name;
        double grade;

        std::cout << "Enter Student " << i + 1 << " ID: ";
        std::cin >> id;
        std::cin.ignore(); // Consume the newline character
        std::cout << "Enter Student " << i + 1 << " Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Student " << i + 1 << " Grade: ";
        std::cin >> grade;
        
        students[i].setStudentId(id);
        students[i].setStudentName(name);
        students[i].setStudentGrade(grade);

        }

}