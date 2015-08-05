//=====================================
// f1102.cpp
// Josephus Problem Object-based Solving
//=====================================
#include"jose.h"
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  cout<<"please input boyNum/interNum/startPos:\n";
  int n, m, s;
  cin>>n>>m>>s;
  Jose(n,m).getWinner();
  Jose(n,m,s).getWinner();
}//====================================

 