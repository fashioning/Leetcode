//=====================================
// f0304.cpp
// C´®²Ù×÷
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  char* s1 = "Hello ";
  char* s2 = "123";
  char a[20];
  strcpy(a, s1);                                      // copy
  cout<<(strcmp(a,s1)==0 ? "" : " not")<<"equal\n";   // compare
  cout<<strcat(a, s2)<<endl;                          // concatenate
  cout<<strrev(a)<<endl;                              // modify
  cout<<strset(a, 'c')<<endl;                         // set
  cout<<(strstr(s1, "ell") ? "" : "not ")<<"found\n"; // find string
  cout<<(strchr(s1,'c') ? "": "not ")<<"found\n";     // find char
}//====================================

 