//==================================
// f0612.cpp
// �ж��ִ���Ȱ汾һ
//==================================
#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
//----------------------------------
int main(){
  ifstream in("string.txt");
  for(string s,t; in>>s>>t; ){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    cout<<(s==t ? "yes\n" : "no\n");
  }
}//=================================

 