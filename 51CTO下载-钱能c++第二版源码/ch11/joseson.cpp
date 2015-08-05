//=====================================
// joseson.cpp
//=====================================
#include"boyring.h"
#include"joseson.h"
#include<iostream>
using namespace std;
//-------------------------------------
JoseSon::JoseSon(int boys, int interval, int begin, int wins)
  :Jose(boys, interval, begin),w(wins){
  if(w<1 || w>=n){
    cout<<"failed in bad winNum.\n";
    throw exception();
  }
}//------------------------------------
void JoseSon::getWinner()const{
  cout<<"There are "<<n<<" boys.\nBoys leaved in order:\n";
  BoyRing x(n);
  x.countBy(s-1);
  for(int i=1,numinLine=0; i<n-w+1; ++i){
    x.countBy(m);
    cout<<"  "<<x.getNum()<<(++numinLine%10 ? "" : "\n");
    x.disengage();
  }
  cout<<"\nWinners are\n";
  x.printAll();
}//------------------------------------

 