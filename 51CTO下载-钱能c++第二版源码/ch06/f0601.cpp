//=====================================
// f0601.cpp
// Ƶ������һ��С����
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
bool isnumber(char);            // ��������
//-------------------------------------
int main(){
  for(char c; cin>>c && c!='\n'; )    // ���������ַ�����Ϊ�س������
    if(isnumber(c))             // ����һ��С����
      cout<<"you entered a digit.\n";
    else cout<<"you entered a non-digit.\n";
}//------------------------------------
bool isnumber(char ch){
  return ch>='0' && ch<='9' ? 1 : 0;
}//====================================

 