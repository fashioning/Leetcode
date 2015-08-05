//=====================================
// jose.cpp
//=====================================
#include"boyring.h"
#include"jose.h"
#include<iostream>
using namespace std;
//-------------------------------------
Jose::Jose(int boys, int interval, int begin):n(boys),m(interval),s(begin){
  if(n<2 || m<1 || m>=n || s<1 || s>=n){
    cerr<<"data error.\n";
    throw exception();
  }
}//------------------------------------
void Jose::getWinner()const{
  cout<<"There are "<<n<<" boys.\nBoys leaved in order:\n";
  BoyRing x(n);
  x.countBy(s-1);
  for(int i=1,numinLine=0; i<n; ++i){
    x.countBy(m);
    cout<<"  "<<x.getNum()<<(++numinLine%10 ? "" : "\n");
    x.disengage();
  }
  cout<<"\nthe winner is\n  "<<x.getNum()<<"\n"; 
}//------------------------------------

 