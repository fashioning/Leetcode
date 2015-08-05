//=====================================
// datemid.cpp
//=====================================
#include"date.h"
#include"datemid.h"
#include<iostream>
//-------------------------------------
DateMid::DateMid(const std::string s):m_p(new Date(s)){}
//-------------------------------------
DateMid::DateMid(int n):m_p(new Date(n)){}
//-------------------------------------
DateMid::DateMid(int y, int m, int d):m_p(new Date(y,m,d)){}
//-------------------------------------
DateMid::DateMid(const Date& d):m_p(new Date(d)){}
//-------------------------------------
DateMid::~DateMid(){ delete m_p; }
//-------------------------------------
DateMid DateMid::operator+(int n)const{ return *m_p + n; }
//-------------------------------------
DateMid& DateMid::operator+=(int n){ *m_p += n; return *this; }
//-------------------------------------
DateMid& DateMid::operator++(){ *m_p += 1; return *this; }
//-------------------------------------
int DateMid::operator-(DateMid& d)const{ return *m_p - *(d.m_p); }
//-------------------------------------
std::ostream& operator<<(std::ostream& o, const DateMid& d){
  return o<<*(d.m_p);
}//------------------------------------

 