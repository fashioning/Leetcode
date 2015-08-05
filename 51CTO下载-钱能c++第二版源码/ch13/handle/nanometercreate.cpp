//=====================================
// nanometercreate.cpp
//=====================================
#include"nanometercreate.h"
#include"d29.h"
#include"d43.h"
//-------------------------------------
Sony* NanometerCreate::createInch29(){
  return new D29();
}//------------------------------------
Sony* NanometerCreate::createInch43(){
  return new D43();
}//------------------------------------
CreateSony* createNanometer(){ return new NanometerCreate(); }
//-------------------------------------

 