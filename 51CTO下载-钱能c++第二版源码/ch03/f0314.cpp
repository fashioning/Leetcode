//=====================================
// f0314.cpp
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  int a = 78, c = 18;
  const int* ip = &a;
  const int* const icp = &c;
  a = 60;  c = 28;
  cout<<"ip =>"<<*ip<<endl;
  cout<<"icp=>"<<*icp<<endl;
}//====================================

 