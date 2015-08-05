//=====================================
// f1509.cpp
// 异常继承体系
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
    // 其他加工
  }catch(MyException& me){
    if(string(me.what())=="HardwareErr")  ; // 停机
    if(string(me.what())=="PerformErr")   ; // 加工件离机，温柔停机
    if(string(me.what())=="OtherErr")     ; // 粗暴停机
    cout<<"MyException: "<<me.what()<<"\n";  
  }catch(exception& e){
    cout<<"StandardException: "<<typeid(e).name()<<"\n";
    // 停机
  }
}//------------------------------------
void metalGroupProccess(int){
  try{
    for(int i=0; i<10; ++i) metalPieseProccess(i);
  }catch(HSizeErr&){
    cout<<"SizeError.\n";
    // 片加工尺寸故障...报废本组金属
  }catch(PerformErr&){
    cout<<"PerformErr.\n";
    // 性能测试失败善后处理
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
    // 纵向尺寸错误...报废本片金属
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

 