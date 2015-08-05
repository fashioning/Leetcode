//==================================
// f0804.cppª¤
// overload member functions
//==================================
#include<iostream>
#include<iomanip>
using namespace std;
//----------------------------------
class Date{
  int year, month, day;
public:
  void set(int y,int m,int d);
  void set(const string& s);
  bool isLeapYear();
  void print();
};//-------------------------------
void Date::set(int y,int m,int d){
  year=y; month=m; day=d;
}//--------------------------------
void Date::set(const string& s){
  year=atoi(s.substr(0,4).c_str());
  month=atoi(s.substr(5,2).c_str());
  day=atoi(s.substr(8,2).c_str());
}//--------------------------------
bool Date::isLeapYear(){
  return (year%4==0 && year%100!=0)||(year%400==0);
}//--------------------------------
void Date::print(){
  cout<<setfill('0');
  cout<<setw(4)<<year<<'-'<<setw(2)<<month<<'-'<<setw(2)<<day<<'\n';
  cout<<setfill(' ');
}//--------------------------------
int main(){
  Date d, e;
  d.set(2000,12,6);
  e.set("2005-05-05");
  e.print();
  if(d.isLeapYear())
    d.print();
}//================================

 