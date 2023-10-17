#include <iostream>
#include "student.h"

int writeToFile(student *data){

 std::ofstream outputFile("students.txt");
    if (!outputFile) {
        std::cerr << "Error opening file for writing." << std::endl;
      return 0;
    }
outputFile << data->getStudentId() << ""
            <<data->getStudentName() << ""
            << data->getStudentGrade() << std::endl;

            outputFile.close();

}
int displayFileData(){
    // Read and display the student data from the file
    std::ifstream inputFile("students.txt");
    if (!inputFile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    std::cout << "\nStudent Data from File:\n";
    int id;
    std::string name;
    double grade;

    while (inputFile >> id >> name >> grade) {
        std::cout << "ID: " << id << ", Name: " << name << ", Grade: " << grade << std::endl;
    }

    inputFile.close();

}
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
        writeToFile(&students[i]);
        }


}