
#include "student.h"
#include<iostream>
using namespace std;

//Student::Student(){}
Student::Student(double admno,std::string name,std::string gender){

    m_admno=admno;
    m_name=name;
    m_gender=gender;

}
double Student::getAdmno(){

    return m_admno;
}
std::string Student::getName()
{
    return m_name;
}
std::string Student::getGender()
{

    return m_gender;
}




