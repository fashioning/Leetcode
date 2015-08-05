//=====================================
// f1509.cpp
// �쳣�̳���ϵ
//=====================================
#include"myexception.h"
#include<iostream>
#include<exception>
#include<typeinfo>
using namespace std;
//-------------------------------------
void metalPieseProccess(int);
void metalGroupProccess(int);
void hProccess();
void vProccess();
void performTest();
void calcVSize();
bool tooSmallHSize(){ return false; }
bool performTestFail(){ return false; }
bool tooSmallVSize(){ return false; }
//-------------------------------------
int main(){
  try{
    for(int i=0; i<10; ++i) metalGroupProccess(i);
    // �����ӹ�
  }catch(MyException& me){
    if(string(me.what())=="HardwareErr")  ; // ͣ��
    if(string(me.what())=="PerformErr")   ; // �ӹ������������ͣ��
    if(string(me.what())=="OtherErr")     ; // �ֱ�ͣ��
    cout<<"MyException: "<<me.what()<<"\n";  
  }catch(exception& e){
    cout<<"StandardException: "<<typeid(e).name()<<"\n";
    // ͣ��
  }
}//------------------------------------
void metalGroupProccess(int){
  try{
    for(int i=0; i<10; ++i) metalPieseProccess(i);
  }catch(HSizeErr&){
    cout<<"SizeError.\n";
    // Ƭ�ӹ��ߴ����...���ϱ������
  }catch(PerformErr&){
    cout<<"PerformErr.\n";
    // ���ܲ���ʧ���ƺ���
    throw;
  }
}//------------------------------------
void metalPieseProccess(int){
  hProccess();
  performTest();
  try{
    vProccess();
    // metalPieseProccess
  }catch(VSizeErr&){
    cout<<"VSizeErrReport.\n";
    // ����ߴ����...���ϱ�Ƭ����
  }
}//------------------------------------
void calcVSize(){
  int a=1;
  // ...
  if(tooSmallVSize())throw VSizeErr();
  // int* p = new int[1000000000];
  if(a) throw OtherErr();
  // ...
}//------------------------------------
void vProccess(){
  calcVSize();
  //...
}//------------------------------------
void hProccess(){
  if(tooSmallHSize()) throw HSizeErr();
  //...
}//------------------------------------
void performTest(){
  if(performTestFail()) throw PerformErr();
  //...
}//====================================

 