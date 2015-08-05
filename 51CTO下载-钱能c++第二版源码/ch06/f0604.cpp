//=====================================
// f0604.cpp
// 未声明内联
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
bool isnumber(char);                 // 此处无inline
//-------------------------------------
int main(){
  for(char c; cin>>c && c!='\n'; )
    if(isnumber(c)) cout<<"you entered a digit.\n";
    else cout<<"you entered a non-digit.\n";
}//------------------------------------
inline bool isnumber(char ch){    // 此处为inline
  return ch>='0' && ch<='9' ? 1 : 0;
}//====================================

 