//=====================================
// checking_sub.cpp
//=====================================
#include<iostream>
#include"checking_sub.h"
//-------------------------------------
Checking::Checking(string acntNo, double balan)
  :Savings(acntNo, balan), remittance(other){}
//-------------------------------------
void Checking::display()const{
  std::cout<<"Checking Account:"+acntNumber+" = "<<balance<<"\n";
}//------------------------------------
void Checking::withdrawal(double amount){
  if(remittance==remitByPost)          //信汇加收30元手续费
    amount += 30;
  else if(remittance==remitByCable)    //电汇加收60元手续费
    amount += 60;
  Savings::withdrawal(amount);
}//------------------------------------

 