//=====================================
// f0308.cpp
// ̽�������ֵ
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int array1[5]={1,2,3};     // �г�ʼ��
int array2[5];             // �޳�ʼ��
//-------------------------------------
int main(){
  int array3[5]={2};        // �г�ʼ��
  int array4[5];            // �޳�ʼ��
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

 