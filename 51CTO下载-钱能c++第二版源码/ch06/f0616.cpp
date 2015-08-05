//=================================
// f0616.cpp
// 剩下串的排列版本二
//=================================
#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
//---------------------------------
int main(){
  ifstream in("remainder.txt");
  for(string s,t; in>>s>>t; ){
    sort(s.begin(), s.end());
    for(int i=0; i<s.length(); ++i)
      if(t.find(s[i])==string::npos)  cout<<s[i];
    cout<<endl;
  }
}//=================================

 