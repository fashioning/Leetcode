//=====================================
// f0709.cpp
// 嵌套的局部作用域
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
void fn(int y);
int j=8;                     // j为全局作用域
//-------------------------------------
int main(){
  int x=1;
  fn(x);
}//---------------------- // x作用域结束
void fn(int y){             // y作用域开始
  if(int i=1)                // if语句块，i作用域开始
    i=2*i;
  else
    i=100;
  // if语句块结束，则i作用域结束
  {  int x=1;                 // x作用域开始
     if(x > y)
       cout<<x<<endl;
     else
       cout<<y<<endl;
  }//-------------------   // x作用域结束
  switch(int i=2){          // switch语句块,i作用域开始
    case 1:
      cout<<i<<endl;
  }                            // switch语句块结束，则i作用域结束
  i = 3;                      // error
  int sum = 0;               // sum作用域开始
  for(int i=0; i<10; ++i) // i作用域开始
    sum += i;
  // i作用域结束 
  int j=3;                    // fn函数块中，int j作用域开始
  char ch;                    // fn函数块中，char ch作用域开始
  {
    double j;                 // 本块中,double j作用域开始
    j=5;                       // 虽赋整数于j，但仍然指double j，非int j
    ::j=6;                     // 全局变量通过::操作可见,但局部int j不可见
    ch='A';                    // 只要本块中没有定义ch变量，则外块ch可见
  }                             // double j作用域结束
  j=6.0;                       // int j可见
}//====================================  // j,ch,y,sum作用域结束

 