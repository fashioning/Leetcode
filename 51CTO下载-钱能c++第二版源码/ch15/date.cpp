//=====================================
// date.cpp
//=====================================
#include"date.h"
#include<exception>
using namespace std;
//-------------------------------------
void Date::init(int y, int m, int d)throw(out_of_range){
  if(y>5000 || y<1 || m<1 || m>12 || d<1 || d>31) throw out_of_range("rangeError");
  year=y, month=m, day=d;
}//------------------------------------
Date::Date(const string& s)throw(out_of_range){
  int y = atoi(s.substr(0,4).c_str());
  int m = atoi(s.substr(5,2).c_str());
  int d = atoi(s.substr(8,2).c_str());
  init(y,m,d);
}//------------------------------------
Date::Date(int y, int m, int d)throw(out_of_range){ init(y,m,d); }
//-------------------------------------
bool Date::isLeapYear()const{
  return (year % 4==0 && year % 100 )|| year % 400==0;
}//------------------------------------

 