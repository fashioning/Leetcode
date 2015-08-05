//=====================================
// f0305.cpp
//=====================================
#include<iostream>
#include<algorithm>
using namespace std;
//-------------------------------------
int main(){
  string a, s1 = "Hello ";
  string s2 = "123";
  a = s1;                                              // copy
  cout<<(a==s1 ? "" : " not")<<"equal\n";              // compare
  cout<<(a+=s2)<<endl;                                 // concatenate
  reverse(a.begin(), a.end());                         // reverse
  cout<<a<<endl;
  cout<<a.replace(0,9,9,'c')<<endl;                    // set
  cout<<(s1.find("ell")!= -1 ? "" : "not ")<<"found\n";// find string
  cout<<(s1.find('c')!= -1 ? "": "not ")<<"found\n";   // find char
}//====================================

 