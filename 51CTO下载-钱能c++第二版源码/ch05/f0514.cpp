//=====================================
// f0514.cpp
// 默认参数
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
void delay(int a = 2);           // 函数声明时
//-------------------------------------
int main(){
  cout<<"delay 2 sec.....";
  delay();                       // 等于调用delay(2)
  cout<<"ended.\n";
  cout<<"delay 5 sec.....";
  delay(5);
  cout<<"ended.\n";
}//------------------------------------
void delay(int a){               // 函数定义时
  int sum=0;
  for(int i=1; i<=a; ++i)
  for(int j=1; j<1000; ++j)
  for(int k=1; k<100000; ++k) sum++;
}//====================================

 