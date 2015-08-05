//=====================================
// f1410.cpp
// Ä£°å±à³Ì
//=====================================
#include"house.h"
#include"cari.h"
#include<iostream>
#include<vector>
using namespace std;
//-------------------------------------
template<typename T>
void doOpen(const T& x){
  x.open();
}//------------------------------------
void openCar(const vector<Car*>& bs){
  for(unsigned i=0; i<bs.size(); ++i)
    doOpen(*bs[i]);
}//------------------------------------
int main(){
  House xa;
  doOpen(xa);
  Car21 b21;
  Car2 b2;
  Car1 b1;
  Car22 b22;
  vector<Car*> vb;
  vb.push_back(&b21);
  vb.push_back(&b2);
  vb.push_back(&b1);
  vb.push_back(&b22);
  openCar(vb);
}//====================================

 