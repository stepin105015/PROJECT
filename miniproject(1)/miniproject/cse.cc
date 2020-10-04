
#include "student.h"
#include"Cse.h"
#include<iostream>
using namespace std;


//Cse::Cse():Student(){}
Cse::Cse(double admno,std::string name,std::string gender,float marks,float totalmarks):Student(admno,name,gender){

    m_marks=marks;
    m_totalmarks=totalmarks;

}
void Cse::display()
{
    double k=Student::getAdmno();
cout<<Student::getAdmno()<<endl;
cout<<Student::getName()<<endl;
cout<<Student::getGender()<<endl;
cout<<m_marks<<endl;
cout<<m_totalmarks<<endl;
}

