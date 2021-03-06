//==================================
// f0608.cpp
// Fibonacci数列四种方法比较
//==================================
#include<iostream>
#include<vector>
#include<time>
#include<cmath>
using namespace std;
//----------------------------------
int fibo1(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  return fibo1(n-1)+fibo1(n-2);
}//---------------------------------
int fibo2(int n){
  int a=0, c;
  for(int b=1,c,i=2; i<=n; ++i)
    c=a+b, a=b, b=c;
  return c;
}//---------------------------------
int fibo3(int n){
  vector<int> v(n+1,0); v[1]=1;
  for(int i=2; i<=n; ++i)
    v[i] = v[i-1]+v[i-2];
  return v[n];
}//---------------------------------
int fibo4(int n){
  return (pow((1+sqrt(5.0))/2,n)-pow((1-sqrt(5.0))/2,n))/sqrt(5.0);
}//---------------------------------
int main(){
  int a;
  clock_t start=clock();
  for(int i=1; i<5; ++i)
    a=fibo1(35);
  cout<<"Fibo1's time was: "<<(clock()-start)/CLK_TCK<<"\n";
  
  start=clock();
  for(int i=1; i<5; ++i)
    a=fibo2(35);
  cout<<"Fibo2's time was: "<<(clock()-start)/CLK_TCK<<"\n";

  start=clock();
  for(int i=1; i<5; ++i)
    a=fibo3(35);
  cout<<"Fibo3's time was: "<<(clock()-start)/CLK_TCK<<"\n";

  start=clock();
  for(int i=1; i<5; ++i)
    a=fibo4(35);
  cout<<"Fibo4's time was: "<<(clock()-start)/CLK_TCK<<"\n";
}//====================================

 