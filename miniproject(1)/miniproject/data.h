#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include"student.h"
#include"Cse.h"
#include"Ece.h"
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class Data
{
    std::list <Cse> list1;
public:
    void add(double,std::string,std::string,float,float);
    void remove(double);
   // UnEmp* findRate(string);
   // double findAverage();
   // double findMax();
    int countAll();
};
#endif
