//=====================================
// f1507.cpp
// 异常捕捉网
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
class HardwareErr{};  // 硬件故障错误
class SizeErr{};       // 尺寸错误
class PerformErr{};   // 性能不合要求
class A{};              // 其他意外错误
//-------------------------------------
void metalPieseProccess(int);          // 金属片加工
void metalGroupProccess(int);          // 逐组加工稀有金属
void calcVSize();                         // 计算纵向尺寸
void hProccess();                         // 横向加工
void vProccess();                         // 纵向加工
void performTest();                       // 性能测试
bool tooSmallHSize(){ return false; } // 横向尺寸太小
bool performTestFail(){ return true; }// 性能测试失败
bool tooSmallVSize(){ return false; }  // 纵向尺寸太小
//-------------------------------------
int main(){                                // 稀有金属处理
  try{
    for(int i=0; i<10; ++i) metalGroupProccess(i);
  }catch(HardwareErr){
    cout<<"HardwareError.\n";
    // 机器复位，停机
  }catch(PerformErr){
    cout<<"PerformError Stop.\n";
    //机器复位，停机
  }catch(...){                            // 其他任何故障
    cout<<"Any Kind Of Error.\n";     // 其他机器硬件故障
    // 停机
  }
}//------------------------------------
void metalGroupProccess(int){
  try{
    for(int i=0; i<10; ++i) metalPieseProccess(i);
  }catch(SizeErr){
    cout<<"SizeError.\n";
    // 片加工尺寸故障...报废本组金属
  }catch(PerformErr){
    cout<<"PerformErr.\n";
    // 性能测试失败善后处理...加工件离机
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
    // 纵向尺寸错误...报废本片金属
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

 