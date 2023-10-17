#include "student.h"

student::student(int id, const std::string name, double g)
{
    m_id =0;
    m_name = "";
    m_grade = 0;
}

student::student()
{
}

student::~student()
{
}

void student::setStudentId(int id)
{
    m_id = id;
}

int student::getStudentId()
{
    return m_id;
}

void student::setStudentName(std::string name)
{
    m_name = name;
}

std::string student::getStudentName()
{
    return std::string(m_name);
}

void student::setStudentGrade(int grade)
{
    m_grade = grade;
}

int student::getStudentGrade()
{
    return m_grade;
}
