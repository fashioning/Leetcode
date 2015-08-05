//=====================================
// savings_base.h
//=====================================
#ifndef HEADER_SAVINGS
#define HEADER_SAVINGS
//-------------------------------------
#include<string>
using std::string;
//-------------------------------------
class Savings{
protected:
  string acntNumber;
  double balance;
public:
  Savings(string acntNo, double balan=0.0);
  void deposit(double amount){ balance += amount; }
  double getBalan()const{ return balance; }
  virtual void display()const;
  virtual void withdrawal(double amount);
};//-----------------------------------
#endif  // HEADER_SAVINGS

 