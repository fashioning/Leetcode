//=====================================
// f1508.cpp
// 异常申述
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
  //粗暴停机
}//------------------------------------
int main(){
  set_unexpected(myUnexpectedHandler);
  try{
    for(int i=0; i<10; ++i) metalGroupProccess(i);
    // 其他加工
  }catch(PerformErr){
    cout<<"PerformError Stop.\n";
    // 加工件离机，温柔停机
  }
}//------------------------------------
void metalGroupProccess(int)throw(PerformErr){
  try{
    for(int i=0; i<10; ++i) metalPieseProccess(i);
  }catch(SizeErr){
    cout<<"SizeError.\n";
    // 片加工尺寸故障...报废本组金属
  }catch(PerformErr){
    cout<<"PerformErr.\n";
    // 性能测试失败善后处理
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
    // 纵向尺寸错误...报废本片金属
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

 