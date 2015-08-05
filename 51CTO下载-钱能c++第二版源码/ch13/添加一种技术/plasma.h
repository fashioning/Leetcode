//=====================================
// plasma.h
//=====================================
#ifndef HEADER_PLASMA
#define HEADER_PLASMA
#include<iostream>
class Plasma{
public:
  virtual void drawgraph(){ std::cout<<"Plasma.drawgraph\n"; }
  virtual void specialForPlasma(){ std::cout<<"SpecialForPlasma\n"; }
};//-----------------------------------
#endif  // HEADER_PLASMA

 