//=====================================
// b29.h
//=====================================
#ifndef HEADER_B29
#define HEADER_B29
#include"inch29.h"
#include"plasma.h"
#include<iostream>
//-------------------------------------
class B29 : public Inch29, protected Plasma{
public:
  void adjustVolume(){ std::cout<<"Plasma29 AdjustVolume\n"; }
  void switchChannel(){ std::cout<<"Plasma29 SwitchChannel\n"; }
 ~B29(){}
};//-----------------------------------
#endif  // HEADER_B29

 