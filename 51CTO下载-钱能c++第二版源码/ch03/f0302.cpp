//=====================================
// f0302.cpp
// 浮点数的位码
//=====================================
#include<iostream>
using namespace std;
int main(){
  float f=19.2F;
  int* pa = reinterpret_cast<int*>(&f);
  for(int i=31; i>=0; i--)
    cout<<(*pa>>i & 1)<<(i==31||i==23 ? ",":"");
  cout<<"\n";
  getchar(); 
}//====================================

 
