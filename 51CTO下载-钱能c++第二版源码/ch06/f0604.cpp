//=====================================
// f0604.cpp
// δ��������
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
bool isnumber(char);                 // �˴���inline
//-------------------------------------
int main(){
  for(char c; cin>>c && c!='\n'; )
    if(isnumber(c)) cout<<"you entered a digit.\n";
    else cout<<"you entered a non-digit.\n";
}//------------------------------------
inline bool isnumber(char ch){    // �˴�Ϊinline
  return ch>='0' && ch<='9' ? 1 : 0;
}//====================================

 