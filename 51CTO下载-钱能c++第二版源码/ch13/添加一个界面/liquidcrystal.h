//=====================================
// liquidcrystal.h
//=====================================
#ifndef HEADER_LIQUIDCRYSTAL
#define HEADER_LIQUIDCRYSTAL
#include<iostream>
//-------------------------------------
class LiquidCrystal{
public:
  virtual void drawgraph(){ std::cout<<"LiquidCrystal\n"; }
  virtual void specialForLiquidCrystal(){
    std::cout<<"SpecialForLiquidCrystal\n"; 
  }
};//-----------------------------------
#endif  // HEADER_LIQUIDCRYSTAL

 