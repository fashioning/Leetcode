//=====================================
// d29.h
//=====================================
#ifndef HEADER_D29
#define HEADER_D29
#include"inch29.h"
#include"nanometer.h"
#include<iostream>
//-------------------------------------
class D29 : public Inch29, protected Nanometer{
public:
  void adjustVolume(){ std::cout<<"Nanometer29 AdjustVolume\n"; }
  void switchChannel(){ std::cout<<"Nanometer29 SwitchChannel\n"; }
  void adjustLight(){ std::cout<<"Nanometer29 AdjustLight\n"; }
 ~D29(){}
};//-----------------------------------
#endif  // HEADER_D29

 