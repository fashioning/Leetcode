//==================================
// f0612.cpp
// 判断字串相等版本一
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

 