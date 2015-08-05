//==================================
// f0609.cpp
// Fibonacci数列两种方法比较
//==================================
#include<iostream>
#include<fstream>
#include<vector>
#include<time>
using namespace std;
//----------------------------------
int main(){
  ifstream in("fibo.in");
  ofstream out("fibo.out");
  clock_t start=clock();
  for(int n; in>>n && n; ){
    int a=0;
    for(int b=1,c,i=2; i<=n+2; ++i)
      c=a+b, a=b, b=c;
    out<<a<<endl;
  }
  cout<<"Fibo2's time was: "<<(clock()-start)/CLK_TCK<<"\n";
  in.seekg(0);  // goto beginning of file

  start=clock();
  vector<int> v(47,1);
  for(int i=3; i<47; ++i) v[i]=v[i-1]+v[i-2];
  for(int n; in>>n && n; ) out<<v[n]<<endl;
  cout<<"Fibo3's time was: "<<(clock()-start)/CLK_TCK<<"\n";
}//=================================

 