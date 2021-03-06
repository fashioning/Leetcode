//=====================================
// f0807.cpp
// member & non-member operator
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
class Point{
  int x, y;
public:
  void set(int a, int b){ x=a, y=b; }
  Point operator+(const Point& d){
    Point s;
    s.set(x+d.x, y+d.y);
    return s;
  }//----------------------------------
  friend ostream& operator<<(ostream& o, const Point& d);
};//===================================
inline ostream& operator<<(ostream& o, const Point& d){
  return o<<"("<<d.x<<","<<d.y<<")\n";
}//====================================
int main(){
  Point s,t;
  s.set(2,5);
  t.set(3,1);
  cout<<s+t;
}//====================================

 