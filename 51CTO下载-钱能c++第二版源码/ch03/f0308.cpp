//=====================================
// f0308.cpp
// 探测数组初值
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int array1[5]={1,2,3};     // 有初始化
int array2[5];             // 无初始化
//-------------------------------------
int main(){
  int array3[5]={2};        // 有初始化
  int array4[5];            // 无初始化
  cout<<"array1: ";
  for(int i=0; i<5; ++i)
    cout<<array1[i]<<" ";
  cout<<"\narray2: ";
  for(int i=0; i<5; ++i)
    cout<<array2[i]<<" ";
  cout<<"\narray3: ";
  for(int i=0; i<5; ++i)
    cout<<array3[i]<<" ";
  cout<<"\narray4: ";
  for(int i=0; i<5; ++i)
    cout<<array4[i]<<" ";
  cout<<"\n";
}//====================================

 