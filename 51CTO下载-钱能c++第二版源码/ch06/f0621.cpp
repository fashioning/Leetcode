//==================================
// f0621.cpp
// 求素数个数低级编程版
//==================================
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//----------------------------------
int count(unsigned int a){
  int sum=0;
  for(unsigned int x=a; x; x>>=1)
    if(x & 1)  sum++;
  return sum;
}//---------------------------------
void sieve(unsigned int* p){
  for(int i=2; i<=10000; ++i)
    if(p[i/32]&(1<<i%32))
      for(int j=i*i; j<100000000; j+=i)
        p[j/32] &= ~(1<<j%32);
}//---------------------------------
int main(){
  clock_t start=clock();
  unsigned int* p = (unsigned int*)malloc(12500000);
  if(!p){
    printf("no enough memory.\n");
    return 1;
  }
  memset(p,255,12500000);
  sieve(p);
  int num=-2;
  for(int i=0; i<12500000/4; ++i)
    num += count(p[i]);
  free(p);
  printf("%d,%7.3f\n",num,(clock()-start)/CLK_TCK);
}//=================================

 