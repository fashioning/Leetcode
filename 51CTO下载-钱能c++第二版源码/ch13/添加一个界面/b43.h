//=====================================
// b43.h
//=====================================
#ifndef HEADER_B43
#define HEADER_B43
#include"inch43.h"
#include"plasma.h"
#include<iostream>
//-------------------------------------
class B43 : public Inch43, protected Plasma{
public:
  void adjustVolume(){ std::cout<<"Plasma43 AdjustVolume\n"; }
  void switchChannel(){ std::cout<<"Plasma43 SwitchChannel\n"; }
  void adjustLight(){ std::cout<<"Plasma43 AdjustLight\n"; }
 ~B43(){}
};//-----------------------------------
#endif  // HEADER_B43

 