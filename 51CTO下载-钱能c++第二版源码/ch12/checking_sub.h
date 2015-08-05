//=====================================
// checking_sub.h
//=====================================
#ifndef HEADER_CHECKING
#define HEADER_CHECKING
//-------------------------------------
#include"savings_base.h"
#include<string>
using std::string;
//-------------------------------------
enum REMIT{remitByPost, remitByCable, other}; //ÐÅ»ã, µç»ã, ÎÞ
//-------------------------------------
class Checking : public Savings{
  REMIT remittance;
public:
  Checking(string acntNo, double balan=0.0);
  void display()const;
  void withdrawal(double amount);
  void setRemit(REMIT re){ remittance = re; }
};//-----------------------------------
#endif  // HEADER_CHECKING

 