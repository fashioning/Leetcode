//=====================================
// f0221.cpp
// Çópi
//=====================================
#include<iostream>
#include<cmath>
using namespace std;
//-------------------------------------
int main(){
  double sum = 0, item = 1;
  long denom = -1;
  int sign = -1;
  do{
    denom += 2;
    sign *= -1;
    item = sign*1.0/denom;
    sum += item;
  }while(abs(item)>1e-6);
  cout<<"Pi = "<<fixed<<sum*4<<endl;
}//====================================

 