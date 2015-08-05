//==================================
// Date class
//==================================
#include<iostream>
#include<iomanip>
using namespace std;
//----------------------------------
class Date{
  int year, month, day;
public:
  void set(int y,int m,int d);
  bool isLeapYear()const;
  void print()const;
};//-------------------------------
inline void Date::set(int y,int m,int d){
  year=y; month=m; day=d;
}//--------------------------------
inline bool Date::isLeapYear()const{
  return (year%4==0 && year%100!=0)||(year%400==0);
}//--------------------------------
inline void Date::print()const{
  cout<<setfill('0');
  cout<<setw(4)<<year<<'-'<<setw(2)<<month<<'-'<<setw(2)<<day<<'\n';
  cout<<setfill(' ');
}//--------------------------------

 