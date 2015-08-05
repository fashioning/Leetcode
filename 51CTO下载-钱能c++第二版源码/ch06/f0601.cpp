//=====================================
// f0601.cpp
// 频繁调用一个小函数
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
bool isnumber(char);            // 函数声明
//-------------------------------------
int main(){
  for(char c; cin>>c && c!='\n'; )    // 反复读入字符，若为回车便结束
    if(isnumber(c))             // 调用一个小函数
      cout<<"you entered a digit.\n";
    else cout<<"you entered a non-digit.\n";
}//------------------------------------
bool isnumber(char ch){
  return ch>='0' && ch<='9' ? 1 : 0;
}//====================================

 