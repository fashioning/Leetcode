//=====================================
// date.h
// class Date derived from IDate
//=====================================
#include"idate.h"
#include<iostream>
//-------------------------------------
class Date : public IDate{
  int year, month, day;
protected:
  int ymd2i()const;
  void i2ymd(int n);
  static const int tians[];
  bool isLeapYear()const{ return !(year%4)&&(year%100)||!(year%400); }
public:
  Date(const std::string s);
  Date(int n){ i2ymd(n); }
  Date(int y, int m, int d):year(y),month(m),day(d){}
 ~Date(){}
  Date& operator+(int n){ return *new Date(ymd2i()+n); }
  Date& operator+=(int n){ i2ymd(ymd2i()+n); return *this; }
  Date& operator++(){ return *this +=1; }
  void print(std::ostream& o)const;
};//-----------------------------------

 