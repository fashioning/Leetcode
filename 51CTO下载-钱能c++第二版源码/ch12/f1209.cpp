//=====================================
// f1209.cpp
// Isolated Classes
//=====================================
#include<iostream>
using namespace std;
#include"savings.h"
#include"checking.h"
//-------------------------------------
int main(){
  Savings s1("3277",3000), s2("3279", 5000);
  Checking c1("888"), c2("398", 10000);
  s1.deposit(100);
  c1.deposit(2000);
  s2.withdrawal(2500);
  c2.withdrawal(1555.5);
  s1.display(); s2.display();
  c1.display(); c2.display();
}//====================================

 