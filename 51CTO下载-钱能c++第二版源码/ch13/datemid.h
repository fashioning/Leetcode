//=====================================
// datemid.h
// DateMid as Application Interface
//=====================================
#include<iostream>
//-------------------------------------
class Date;
//-------------------------------------
class DateMid{
  Date* m_p;
public:
  DateMid(const std::string s);
  DateMid(int n);
  DateMid(int y, int m, int d);
  DateMid(const Date& d);
 ~DateMid();
  DateMid operator+(int n)const;
  DateMid& operator+=(int n);
  DateMid& operator++();
  int operator-(DateMid& d)const;
  friend std::ostream& operator<<(std::ostream& o, const DateMid& d);
};//-----------------------------------

 