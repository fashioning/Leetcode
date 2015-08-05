//=====================================
// f0404.cpp
// ¾«¶È¶ªÊ§
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  float f=7.0/3;
  int a = 7.0/3;
  cout.precision(9);
  cout<<fixed<<7.0/3<<endl<<f<<endl<<a<<endl;
  double d = 123456789.9*9;
  a = f = d;
  cout<<d<<endl<<f<<endl<<a<<endl;
}//====================================

 