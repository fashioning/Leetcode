//=====================================
// f0307.cpp
// 省略数组定义中方括号内的表达式
//=====================================
#include<iostream>
//-------------------------------------
int main(){
  int a[]={1,2,3,4,5};
  for(int i=0; i<sizeof(a)/sizeof(a[0]); ++i)
    std::cout<<a[i]<<" ";
  std::cout<<"\n";
}//====================================

 