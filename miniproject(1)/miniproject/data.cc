#include"student.h"
#include"Cse.h"
#include"Ece.h"
#include"data.h"
//#include"csv.cpp"
#include <iostream>
#include<string>
#include <list>
#include <iterator>
#include <fstream>
#include <sstream>
using namespace std;
void Data::add(double m_admno,std::string m_name,std::string m_gender,float m_marks,float m_totalmarks)
{
    list1.push_back(Cse(m_admno,m_name,m_gender,m_marks,m_totalmarks));
}
void Data::remove(double m_admno)
{
    std::list<Cse> :: iterator iter;
    for(iter=list1.begin();iter!=list1.end();iter++)
    {
        if(iter->getAdmno()==m_admno)
        {
           list1.erase(iter);
           break;
        }
    } 
    }
    int Data:: countAll()
{
   return list1.size();
}
