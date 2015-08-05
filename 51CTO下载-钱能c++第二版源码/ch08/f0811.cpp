//=====================================
// f0811.cpp
// using PPoint class
//=====================================
#include"ppoint.h"
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  PPoint p;
  //重复输入x和y轴分量，直到x分量值小于0
  for(double x,y; cout<<"Enter x and y:\n" && cin>>x>>y && x>=0; ){
    p.set(x,y);
    cout<<"angle="<<p.angle()<<", radius="<<p.radius()
        <<", x offset="<<p.xOffset()<<", y offset="<<p.yOffset()<<"\n";
  }
}//====================================

 