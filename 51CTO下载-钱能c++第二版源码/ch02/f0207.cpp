//=====================================
// f0207.cpp
// �����������ж�һ�������Ƿ�����
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  cout<<"please input a number: \n";
  int m;
  cin>>m;
  for(int i=2; i<m; ++i)
    if(m%i==0){
      cout<<m<<" isn't a prime.\n";
      return 1;
    }
  cout<<m<<" is a prime.\n";
}//====================================

 