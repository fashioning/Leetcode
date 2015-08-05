//=====================================
// f1210.cpp
// Inheriting for Reducing Verbose Code
//=====================================
#include<iostream>
#include<list>
using namespace std;
#include"savings_base.h"
#include"checking_sub.h"
//-------------------------------------
int main(){
  Savings s1("3277",3000), s2("3279", 5000);
  Checking c1("888"), c2("398", 10000);
  s1.deposit(100);
  c1.deposit(2000);
  s2.withdrawal(2500);
  c2.withdrawal(1555.5);
  list<Savings*> sList;
  sList.push_back(&s1);
  sList.push_back(&s2);
  sList.push_back(&c1);
  sList.push_back(&c2);
  for(list<Savings*>::iterator it=sList.begin(); it!=sList.end(); ++it)
    (*it)->display();
}//====================================

 