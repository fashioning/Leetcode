//=====================================
// f1103.cpp
// Josephus Problem Maintenance
//=====================================
#include"josex.h"
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  cout<<"please input boyNum/interNum/startPos/winNum:\n";
  int n, m, s, w;
  cin>>n>>m>>s>>w;
  Jose(n,m).getWinner();
  Jose(n,m,s).getWinner();
  Jose(n,m,s,w).getWinner();
}//====================================

 