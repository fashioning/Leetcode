//=====================================
// c43.h
//=====================================
#ifndef HEADER_C43
#define HEADER_C43
#include"inch43.h"
#include"liquidcrystal.h"
#include<iostream>
//-------------------------------------
class C43 : public Inch43, protected LiquidCrystal{
public:
  void adjustVolume(){ std::cout<<"Liquidcrystal43 AdjustVolume\n"; }
  void switchChannel(){ std::cout<<"Liquidcrystal43 SwitchChannel\n"; }
 ~C43(){}
};//-----------------------------------
#endif  // HEADER_C43

 