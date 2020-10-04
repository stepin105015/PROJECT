
#ifndef INCLUDED__STUDENT_H
#define INCLUDED__STUDENT_H

#include<string>
#include<iostream>
using namespace std;
class Student
{
 	double m_admno;
 	std::string m_name;
 	std::string m_gender;


public:
    Student();
    Student(double,std::string ,std::string );
    double getAdmno();
    std::string getName();
    std::string getGender();

   virtual void display()=0;

};
#endif
