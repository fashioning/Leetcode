//=====================================
// d43.h
//=====================================
#ifndef HEADER_D43
#define HEADER_D43
#include"inch43.h"
#include"nanometer.h"
#include<iostream>
//-------------------------------------
class D43 : public Inch43, protected Nanometer{
public:
  void adjustVolume(){ std::cout<<"Nanometer43 AdjustVolume\n"; }
  void switchChannel(){ std::cout<<"Nanometer43 SwitchChannel\n"; }
  void adjustLight(){ std::cout<<"Nanometer43 AdjustLight\n"; }
 ~D43(){}
};//-----------------------------------
#endif  // HEADER_D43

 