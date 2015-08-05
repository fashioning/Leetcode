//=====================================
// date.h
//=====================================
#ifndef HEADER_DATE
#define HEADER_DATE
#include<iostream>
#include<iomanip>
using namespace std;
//-------------------------------------
class Date{
  int year, month, day;
  void init(int y, int m, int d)throw(out_of_range);
public:
  Date(const string& s)throw(out_of_range);
  Date(int y=2000, int m=1, int d=1)throw(out_of_range);
  bool isLeapYear()const;
  friend ostream& operator<<(ostream& o, const Date& d);
};//-----------------------------------
inline ostream& operator<<(ostream& o, const Date& d){
  o<<setfill('0')<<setw(4)<<d.year<<'-'<<setw(2)<<d.month<<'-';
  return o<<setw(2)<<d.day<<'\n'<<setfill(' ');
}//------------------------------------
#endif  //HEADER_DATE

 