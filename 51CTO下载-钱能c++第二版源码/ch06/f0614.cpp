//==================================
// f0614.cpp
// 判断字串相等版本三
//==================================
#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
//----------------------------------
int main(){
  ifstream in("string.txt");
  for(string s,t; in>>s>>t; ){
    int s1=count(s.begin(), s.end(),'1');
    int t1=count(t.begin(), t.end(),'1');
    cout<<(s1==t1 && s.length()==t.length() ? "yes\n" : "no\n");
  }
}//=================================

 