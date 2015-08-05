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
  bool isLeapYear(){
    return (year%4==0 && year%100!=0)||(year%400==0);
  }//------------------------------
  void print(){
    cout<<setfill('0');
    cout<<setw(4)<<year<<'-'<<setw(2)<<month<<'-'<<setw(2)<<day<<'\n';
    cout<<setfill(' ');
  }//------------------------------
  void set(int y,int m,int d){ year=y; month=m; day=d; }
};//===============================

 