

#include "student.h"
#include"Ece.h"
#include<iostream>
using namespace std;


//Ec::Ece():Student(){}
Ece::Ece(double admno,std::string name,std::string gender,float marks,float totalmarks):Student(admno,name,gender){

    m_marks=marks;
    m_totalmarks=totalmarks;

}
void Ece::display()
{
cout<<Student::getAdmno()<<endl;
cout<<Student::getName()<<endl;
cout<<Student::getGender()<<endl;
cout<<m_marks<<endl;
cout<<m_totalmarks<<endl;
}

