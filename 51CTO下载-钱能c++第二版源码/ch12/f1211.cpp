//=====================================
// f1211.cpp
// Shared BaseClass Scheme
//=====================================
#include<iostream>
#include<list>
using namespace std;
#include"savings_bro.h"
#include"checking_bro.h"
#include"account.h"
//-------------------------------------
int main(){
  Savings s1("3277",3000), s2("3279", 5000);
  Checking c1("888"), c2("398", 10000);
  s1.deposit(100);
  c1.deposit(2000);
  s2.withdrawal(2500);
  c2.withdrawal(1555.5);
  list<Account*> a;
  a.push_back(&s1);
  a.push_back(&s2);
  a.push_back(&c1);
  a.push_back(&c2);
  cout<<"There are "<<a.size()<<" accounts:\n";
  for(list<Account*>::iterator it=a.begin(); it!=a.end(); ++it)
    (*it)->display();
}//====================================

 