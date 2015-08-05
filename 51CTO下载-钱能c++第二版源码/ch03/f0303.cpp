//=====================================
// f0303.cpp
// C串比较的错误方式
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  cout<<("join"=="join" ? "" : "not ")<<"equal\n";   // 直接字面值比较
  char* str1="good";
  char* str2="good";
  cout<<(str1==str2 ? "" : "not ")<<"equal\n";       // 字符指针比较
  char buffer1[6]="Hello";
  char buffer2[6]="Hello";
  cout<<(buffer1==buffer2 ? "" : "not ")<<"equal\n"; // 字符数组比较
}//====================================

 