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
  if(remittance==remitByPost)          //�Ż����30Ԫ������
    amount += 30;
  else if(remittance==remitByCable)    //������60Ԫ������
    amount += 60;
  Savings::withdrawal(amount);
}//------------------------------------

 