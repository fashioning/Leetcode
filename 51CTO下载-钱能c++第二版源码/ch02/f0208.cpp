//=====================================
// f0208.cpp
// �ж�һ�������Ƿ���������΢�Ż���
//=====================================
#include<iostream>
#include<cmath>   // sqrt()
using namespace std;
//-------------------------------------
int main(){
  cout<<"please input a number: \n";
  int m;
  cin>>m;
  double sqrtm=sqrt(m*1.0);
  for(int i=2; i<=sqrtm; ++i)
    if(m%i==0){
      cout<<m<<" isn't a prime.\n";
      return 1;
    }
  cout<<m<<" is a prime.\n";
}//====================================

 