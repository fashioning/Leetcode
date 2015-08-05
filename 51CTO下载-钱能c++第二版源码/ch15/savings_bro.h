//=====================================
// savings_bro.h
//=====================================
#ifndef HEADER_SAVINGS
#define HEADER_SAVINGS
//-------------------------------------
#include"account.h"
#include<string>
using std::string;
//-------------------------------------
class Savings : public Account{
  static double minBalance;
public:
  Savings(string acntNo, double balan=0.0):Account(acntNo,balan){}
  void display()const;
  void withdrawal(double amount);
};//-----------------------------------
#endif  // HEADER_SAVINGS

 