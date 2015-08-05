//=====================================
// f0313.cpp
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  int iArray[6];
  for(int i=0; i<6; ++i)  iArray[i] = i*2;
  for(int* iP=iArray; iP<iArray+6; iP+=1)
    cout<<iP<<": "<<*iP<<endl;
}//====================================

 