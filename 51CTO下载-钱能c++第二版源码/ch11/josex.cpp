//=====================================
// josex.cpp
//=====================================
#include"boyring.h"
#include"josex.h"
#include<iostream>
using namespace std;
//-------------------------------------
Jose::Jose(int boys, int interval, int begin, int wins)
  :n(boys),m(interval),s(begin),w(wins){
  if(n<2 || m<1 || m>=n || s<0 || s>=n || w<1 || w>=n){
    cout<<"data error.\n";
    throw exception();
  }
}//------------------------------------
void Jose::getWinner()const{
  cout<<"\nThere are "<<n<<" boys.\nBoys leaved in order:\n";
  BoyRing x(n);
  x.countBy(s-1);
  for(int i=1,numinLine=0; i<n-w+1; ++i){
    x.countBy(m);
    cout<<"  "<<x.getNum()<<(++numinLine%10 ? "" : "\n");
    x.disengage();
  }
  cout<<"\nwinners:\n";
  x.printAll();
}//------------------------------------

 