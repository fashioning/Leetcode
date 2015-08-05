//=====================================
// f1508.cpp
// �쳣����
//=====================================
#include<iostream>
#include<exception>
using namespace std;
//-------------------------------------
class HardwareErr{}; 
class SizeErr{}; 
class PerformErr{}; 
class A{}; 
//-------------------------------------
void metalPieseProccess(int)throw(PerformErr,SizeErr);
void metalGroupProccess(int)throw(PerformErr);
void hProccess()throw(SizeErr); 
void vProccess()throw(SizeErr); 
void performTest()throw(PerformErr); 
void calcVSize()throw(SizeErr); 
bool tooSmallHSize(){ return false; } 
bool performTestFail(){ return false; } 
bool tooSmallVSize(){ return false; } 
void myUnexpectedHandler(){
  cout<<"AnyKindOfError.\n";
  //�ֱ�ͣ��
}//------------------------------------
int main(){
  set_unexpected(myUnexpectedHandler);
  try{
    for(int i=0; i<10; ++i) metalGroupProccess(i);
    // �����ӹ�
  }catch(PerformErr){
    cout<<"PerformError Stop.\n";
    // �ӹ������������ͣ��
  }
}//------------------------------------
void metalGroupProccess(int)throw(PerformErr){
  try{
    for(int i=0; i<10; ++i) metalPieseProccess(i);
  }catch(SizeErr){
    cout<<"SizeError.\n";
    // Ƭ�ӹ��ߴ����...���ϱ������
  }catch(PerformErr){
    cout<<"PerformErr.\n";
    // ���ܲ���ʧ���ƺ���
    throw;
  }
}//------------------------------------
void metalPieseProccess(int)throw(PerformErr,SizeErr){
  hProccess();
  performTest();
  try{
    vProccess();
    // metalPieseProccess
  }catch(SizeErr){
    cout<<"VSizeErrReport.\n";
    // ����ߴ����...���ϱ�Ƭ����
  }
}//------------------------------------
void calcVSize()throw(SizeErr){
  // ...
  if(tooSmallVSize())throw SizeErr();
  throw A();
  // ...
}//------------------------------------
void vProccess()throw(SizeErr){
  calcVSize();
  //...
}//------------------------------------
void hProccess()throw(SizeErr){
  if(tooSmallHSize()) throw SizeErr();
  //...
}//------------------------------------
void performTest()throw(PerformErr){
  if(performTestFail()) throw PerformErr();
  //...
}//====================================

 