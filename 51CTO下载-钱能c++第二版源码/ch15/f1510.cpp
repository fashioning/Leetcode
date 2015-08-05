//=====================================
// f1510.cpp
// 构造函数中抛掷异常
//=====================================
#include"date.h"
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  try{
    Date c("abc");
    Date d(2003,12,6);
    Date e(2002);
    Date f(2002,12);
    Date g;
    cout<<c<<d<<e<<f<<g;
  }catch(out_of_range&){
    cout<<"BecauseOfCreateDateObjectError\n";
  }
}//====================================

 