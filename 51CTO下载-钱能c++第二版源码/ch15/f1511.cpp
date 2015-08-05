//=====================================
// f1511.cpp
// 引用的动态转型
//=====================================
#include<iostream>
#include<typeinfo>
using namespace std;
#include"savings_bro.h"
#include"checking_bro.h"
#include"accountlist.h"
//-------------------------------------
int main(){
  Savings s1("3277",3000), s2("3279", 5000);
  Checking c1("888"), c2("398", 10000);
  AccountList a;
  a.add(s1);  a.add(s2);
  a.add(c1);  a.add(c2);
  Account* p;
  if(p = a.find("3277")) p->deposit(100);
  if(p = a.find("888"))  p->deposit(2000);
  if(p = a.find("3279")) p->withdrawal(2500);
  if(p = a.find("398"))  p->withdrawal(1555.5);
  for(Node* p=a.getFirst(); p; p=p->next)
    try{
        dynamic_cast<Checking&>(p->acnt).deposit((p->acnt).getBalan()*0.05);
    }catch(bad_cast&){
      double temp = (p->acnt).getBalan()*0.1;
      (p->acnt).deposit(temp);
    }
  a.display();
}//====================================

 