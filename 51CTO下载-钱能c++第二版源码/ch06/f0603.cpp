//=====================================
// f0603.cpp
// ��������
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
inline bool isnumber(char);    // ��������
//-------------------------------------
int main(){
  for(char c; cin>>c && c!='\n'; )
    if(isnumber(c)) cout<<"you entered a digit.\n";
    else cout<<"you entered a non-digit.\n";
}//------------------------------------
bool isnumber(char ch){
  return ch>='0' && ch<='9' ? 1 : 0;
}//====================================

 