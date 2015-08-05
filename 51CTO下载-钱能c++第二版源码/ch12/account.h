//=====================================
// account.h
//=====================================
#ifndef HEADER_ACCOUNT
#define HEADER_ACCOUNT
//-------------------------------------
#include<string>
using std::string;
//-------------------------------------
class Account{
protected:
  string acntNumber;
  double balance;
public:
  Account(string acntNo, double balan=0.0);
  virtual void display()const;
  double getBalan()const{ return balance; }
  void deposit(double amount){ balance += amount; }
  bool operator==(const Account& a){ return acntNumber==a.acntNumber; }
  virtual void withdrawal(double amount){ return; }
};//-----------------------------------
#endif  // HEADER_ACCOUNT

 