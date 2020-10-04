
#ifndef __ECE_H
#define __ECE_H
#include<string>
#include"student.h"
#include<iostream>

class Ece:public Student {

	float m_marks;
	float m_totalmarks;



public:
    Ece();
    Ece(double,std::string,std::string,float,float);

    void display();
};
#endif
