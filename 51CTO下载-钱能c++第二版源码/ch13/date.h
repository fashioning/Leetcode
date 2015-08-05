//=====================================
// date.h
// class date with year-month-day version
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
class Date{
  int year, month, day;
protected:
  int ymd2i()const;
  void i2ymd(int n);
  void print(ostream& o)const;
  static const int tians[];
  bool isLeapYear()const{ return !(year%4)&&(year%100)||!(year%400); }
public:
  Date(const string& s);
  Date(int n=1){ i2ymd(n); }
  Date(int y, int m, int d):year(y),month(m),day(d){}
  Date operator+(int n)const{ return Date( ymd2i() + n ); }
  Date& operator+=(int n){ i2ymd(ymd2i()+n); return *this; }
  Date& operator++(){ return *this +=1; }
  int operator-(Date& d)const{ return ymd2i() - d.ymd2i(); }
  friend ostream& operator<<(ostream& o, const Date& d);
};//-----------------------------------

 