//=====================================
// a43.h
//=====================================
#ifndef HEADER_A43
#define HEADER_A43
#include"inch43.h"
#include"pureflat.h"
#include<iostream>
//-------------------------------------
class A43 : public Inch43, protected Pureflat{
public:
  void adjustVolume(){ std::cout<<"Pureflat43 AdjustVolume\n"; }
  void switchChannel(){ std::cout<<"Pureflat43 SwitchChannel\n"; }
  void adjustLight(){ std::cout<<"Pureflat43 AdjustLight\n"; }
 ~A43(){}
};//-----------------------------------
#endif  // HEADER_A43

 