//=====================================
// savings.cpp
//=====================================
#include<iostream>
#include"savings_base.h"
//-------------------------------------
Savings::Savings(string acntNo, double balan)
  :acntNumber(acntNo), balance(balan){}
//-------------------------------------
void Savings::display()const{
  std::cout<<"Savings Account:"+acntNumber+" = "<<balance<<"\n";
}//------------------------------------
void Savings::withdrawal(double amount){
  if(balance < amount)
    std::cout <<"Insufficient funds withdrawal: "<<amount<<"\n";
  else
    balance -= amount;
}//------------------------------------

 