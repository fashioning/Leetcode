//=====================================
// checking.cpp
//=====================================
#include<iostream>
#include"checking.h"
//-------------------------------------
Checking::Checking(string acntNo, double balan)
  :acntNumber(acntNo), balance(balan), remittance(other){}
//-------------------------------------
void Checking::display()const{
  std::cout<<"Checking Account:"+acntNumber+" = "<<balance<<"\n";
}//------------------------------------
void Checking::withdrawal(double amount){
  if(remittance==remitByPost)          //信汇加收30元手续费
    amount += 30;
  if(remittance==remitByCable)         //电汇加收60元手续费
    amount += 60;
  if(balance < amount)
    std::cout<<"Insufficient funds withdrawal: "<<amount<<"\n";
  else
    balance -= amount;
}//------------------------------------

 