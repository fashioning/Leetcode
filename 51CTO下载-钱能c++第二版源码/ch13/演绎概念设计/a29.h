//=====================================
// a29.h
//=====================================
#ifndef HEADER_A29
#define HEADER_A29
#include"inch29.h"
#include"pureflat.h"
#include<iostream>
//-------------------------------------
class A29 : public Inch29, protected Pureflat{
public:
  void adjustVolume(){ std::cout<<"Pureflat29 AdjustVolume\n"; }
  void switchChannel(){ std::cout<<"Pureflat29 SwitchChannel\n"; }
 ~A29(){}
};//-----------------------------------
#endif  // HEADER_A29

 