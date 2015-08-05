//=====================================
// f1104.cpp
// Josephus Problem Extension
//=====================================
#include"joseson.h"
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  cout<<"please input boyNum/interNum/startPos/winNum:\n";
  int n, m, s, w;
  cin>>n>>m>>s>>w;
  JoseSon(n,m).getWinner();
  JoseSon(n,m,s).getWinner();
  JoseSon(n,m,s,w).getWinner();
}//====================================

 