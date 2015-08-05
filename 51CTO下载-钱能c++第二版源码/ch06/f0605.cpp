//==================================
// f0605.cpp
// 内联性能测试
//==================================
#include<iostream>
#include<time.h>
using namespace std;
//----------------------------------
int calc1(int a, int b){
  return a+b;
}//---------------------------------
inline int calc2(int a, int b){
  return a+b;
}//---------------------------------
int main(){
  int x[1000], y[1000], z[1000];
  clock_t t = clock();
  for(int i=0; i<1000; ++i)
  for(int j=0; j<1000; ++j)
  for(int k=0; k<1000; ++k)
    z[i] = calc1(x[j], y[k]);
  cout <<"Not using inline: " <<(clock()-t)/CLK_TCK <<" seconds\n";

  t = clock();
  for(int i=0; i<1000; ++i)
  for(int j=0; j<1000; ++j)
  for(int k=0; k<1000; ++k)
  z[i] = calc2(x[j], y[k]);
  cout <<"    Using inline: " <<(clock()-t)/CLK_TCK <<" seconds\n";
  getchar(); 
  getchar(); 
}//=================================
