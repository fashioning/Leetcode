//=====================================
// idate.h
//=====================================
#include<iostream>
//-------------------------------------
class IDate{
protected:
  virtual int ymd2i()const = 0;
public:
  virtual ~IDate(){}
  virtual IDate& operator+(int n) = 0;
  int operator-(const IDate& d){ return ymd2i() - d.ymd2i(); }
  virtual IDate& operator+=(int n) = 0;
  virtual IDate& operator++() = 0;
  virtual void print(std::ostream& o)const = 0;
};//-----------------------------------
IDate& createDate(int y, int m, int d);
IDate& createDate(int n);
IDate& createDate(const std::string s);
//-------------------------------------
inline std::ostream& operator<<(std::ostream& o, const IDate& d){
  d.print(o); return o;
}//------------------------------------

 