//=====================================
// f1505.cpp
// �����ڴ����
//=====================================
#include<iostream>
#include<exception>
using namespace std;
//-------------------------------------
int main(){
  try{
    int* p = new int[1000000000];  // �������쳣
    p[1000000]=1000;
    cout<<p[1000000]<<"\n";
  }catch(bad_alloc){
    cout<<"Bad Allocation...\n";
  }
  cout<<"end of programm.\n";
}//====================================

 