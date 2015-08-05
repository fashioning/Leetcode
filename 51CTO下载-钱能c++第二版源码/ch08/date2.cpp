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
  void set(int y,int m,int d){      // Ĭ������
    year=y; month=m; day=d;
  }//------------------------------
  bool isLeapYear();
  void print();
};//-------------------------------
inline bool Date::isLeapYear(){    // ��ʽ����
  return (year%4==0 && year%100!=0)||(year%400==0);
}//--------------------------------
void Date::print(){
  cout<<setfill('0');
  cout<<setw(4)<<year<<'-'<<setw(2)<<month<<'-'<<setw(2)<<day<<'\n';
  cout<<setfill(' ');
}//--------------------------------

 