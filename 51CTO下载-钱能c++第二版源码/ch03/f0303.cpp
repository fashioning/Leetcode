//=====================================
// f0303.cpp
// C���ȽϵĴ���ʽ
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  cout<<("join"=="join" ? "" : "not ")<<"equal\n";   // ֱ������ֵ�Ƚ�
  char* str1="good";
  char* str2="good";
  cout<<(str1==str2 ? "" : "not ")<<"equal\n";       // �ַ�ָ��Ƚ�
  char buffer1[6]="Hello";
  char buffer2[6]="Hello";
  cout<<(buffer1==buffer2 ? "" : "not ")<<"equal\n"; // �ַ�����Ƚ�
}//====================================

 