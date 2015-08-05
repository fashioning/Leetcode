//=====================================
// f1213.cpp
// Type Conversions
//=====================================
#include<iostream>
using namespace std;
#include"savings_bro.h"
#include"checking_bro.h"
#include"accountlist.h"
//-------------------------------------
int main(){
  Savings s1("3277",3000), s2("3279", 5000);
  Checking c1("888"), c2("398", 10000);
  Savings a1("1001",4000), a2("1002", 7000);
  AccountList a;
  a.add(s1);  a.add(s2);
  a.add(c1);  a.add(c2);
  a.add(a1);  a.add(a2);
  a.remove("888");
  Account* p;
  if(p = a.find("3277")) p->deposit(100);
  if(p = a.find("888"))  p->deposit(2000);
  if(p = a.find("3279")) p->withdrawal(2500);
  if(p = a.find("398"))  p->withdrawal(1555.5);
  if(p = a.find("1001")) p->withdrawal(1122.5);
  Checking* pC;
  Savings* pS;
  for(Node* p=a.getFirst(); p; p=p->next)
    if(pC = dynamic_cast<Checking*>(&(p->acnt)))//p是for里面的node类指针，如果acnt时checking类，则计算利息
      pC->deposit(pC->Account::getBalan()*0.05); //计算利息
    else if(pS = dynamic_cast<Savings*>(&(p->acnt)))
      pS->deposit(pS->Account::getBalan()*0.1);
  a.display();
}//====================================

 