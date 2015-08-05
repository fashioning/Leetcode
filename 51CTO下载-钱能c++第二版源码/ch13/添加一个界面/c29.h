//=====================================
// c29.h
//=====================================
#ifndef HEADER_C29
#define HEADER_C29
#include"inch29.h"
#include"liquidcrystal.h"
#include<iostream>
//-------------------------------------
class C29 : public Inch29, protected LiquidCrystal{
public:
  void adjustVolume(){ std::cout<<"LiquidCrystal29 AdjustVolume\n"; }
  void switchChannel(){ std::cout<<"LiquidCrystal29 SwitchChannel\n"; }
  void adjustLight(){ std::cout<<"LiquidCrystal29 AdjustLight\n"; }
 ~C29(){}
};//-----------------------------------
#endif  // HEADER_C29

 