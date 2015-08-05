//=====================================
// f1404.cpp
// const parameters are unallowed for reference arguments
//=====================================
#include<iostream>
//-------------------------------------
template<typename T>
void swap(T& a, T& b){   // reference type
  T temp=a; a=b; b=temp;
}//------------------------------------
int main(){
  int ia=3;
  const int cb=5;
  swap(ia, 7);            // error
  swap<int>(ia, 7);       // also error
  swap(cb, 7);            // error:以const int匹配
  swap<const int>(ia, 7); // 同第16行
}//====================================

 