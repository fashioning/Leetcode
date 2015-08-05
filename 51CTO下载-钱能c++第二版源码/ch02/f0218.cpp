//=====================================
// f0218.cpp
// Çópi
//=====================================
#include<iostream>
#include<iomanip>
#include<cmath>  // abs()
using namespace std;
//-------------------------------------
int main(){
  double sum=0, item=1;
  for(int n=1; abs(item)>1e-6; ++n){
    item *= (-1.0)*(2*n-3)/(2*n-1);
    sum += item;
  }
  cout<<"Pi = "<<setiosflags(ios::fixed)<<sum*4<<endl;
}//====================================

 