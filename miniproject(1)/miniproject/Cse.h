
#ifndef __CSE_H
#define __CSE_H
#include<string>
#include"student.h"
#include<iostream>

class Cse:public Student {

	float m_marks;
	float m_totalmarks;



public:
    //Cse();
    Cse(double,std::string,std::string,float,float);

    void display();
};
#endif
