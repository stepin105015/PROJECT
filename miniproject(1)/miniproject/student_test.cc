
/*#include "student.h"
#include"Cse.h"
#include"Ece.h"
#
#include<iostream>
using namespace std;
int main()
{
 Ece e1(134,"lok","male",400,500);
    e1.display();
 Cse c1(123,"hari","male",300,500);
    c1.display();*/
      

#include"student.h"
#include"Cse.h"
#include"Ece.h"
#include"data.h"
#include <gtest/gtest.h>
namespace {
class DataTest : public ::testing::Test {

protected:
  void SetUp()
  {
    Cse1.add(1234,"loka","male",400,500);
    Cse1.add(234,"hari","male",300,500);
    }
    void TearDown() {}
  Data Cse1;
};
TEST_F(DataTest,AddTest) {
  //se1.add(123,"sai","male",400,500);
  EXPECT_EQ(2, Cse1.countAll());
}
    }
