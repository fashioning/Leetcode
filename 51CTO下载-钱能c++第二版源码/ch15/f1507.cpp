//=====================================
// f1507.cpp
// �쳣��׽��
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
class HardwareErr{};  // Ӳ�����ϴ���
class SizeErr{};       // �ߴ����
class PerformErr{};   // ���ܲ���Ҫ��
class A{};              // �����������
//-------------------------------------
void metalPieseProccess(int);          // ����Ƭ�ӹ�
void metalGroupProccess(int);          // ����ӹ�ϡ�н���
void calcVSize();                         // ��������ߴ�
void hProccess();                         // ����ӹ�
void vProccess();                         // ����ӹ�
void performTest();                       // ���ܲ���
bool tooSmallHSize(){ return false; } // ����ߴ�̫С
bool performTestFail(){ return true; }// ���ܲ���ʧ��
bool tooSmallVSize(){ return false; }  // ����ߴ�̫С
//-------------------------------------
int main(){                                // ϡ�н�������
  try{
    for(int i=0; i<10; ++i) metalGroupProccess(i);
  }catch(HardwareErr){
    cout<<"HardwareError.\n";
    // ������λ��ͣ��
  }catch(PerformErr){
    cout<<"PerformError Stop.\n";
    //������λ��ͣ��
  }catch(...){                            // �����κι���
    cout<<"Any Kind Of Error.\n";     // ��������Ӳ������
    // ͣ��
  }
}//------------------------------------
void metalGroupProccess(int){
  try{
    for(int i=0; i<10; ++i) metalPieseProccess(i);
  }catch(SizeErr){
    cout<<"SizeError.\n";
    // Ƭ�ӹ��ߴ����...���ϱ������
  }catch(PerformErr){
    cout<<"PerformErr.\n";
    // ���ܲ���ʧ���ƺ���...�ӹ������
    throw;
  }
}//------------------------------------
void metalPieseProccess(int){
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
void calcVSize(){
  int a;
  if(tooSmallVSize()) throw SizeErr();
  if(a) throw A();
  // ...
}//------------------------------------
void vProccess(){
  calcVSize();
  //...
}//------------------------------------
void hProccess(){
  if(tooSmallHSize()) throw SizeErr();
  //...
}//------------------------------------
void performTest(){
  if(performTestFail()) throw PerformErr();
  //...
}//====================================

 