//=====================================
// f0408.cpp
// C-´®¿½±´
//=====================================
#include<iostream>
//-------------------------------------
char* myStrcpy(char* s1, const char* s2){
  char* s = s1;
  while(*s++ = *s2++);
  return s1;
}//------------------------------------
int main(){
  char a[50];
  const char* s="Hello, I am a student.\n";
  std::cout<<myStrcpy(a,s);
}//====================================

 