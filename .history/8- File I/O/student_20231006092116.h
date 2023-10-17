#include <iostream>
#include <fstream>
#include <string>

class student
{
private:
    int m_id;
    std::string m_name;
    double m_grade;
public:
    student(int id , const std::string name , double m_grade);
    ~student();
    void setStudentId(int id);
    int getStudentId();
    void setStudentName(std::string name);
    std::string getStudentName();
    void setStudentGrade(int grade);
    int getStudentGrade();
};
