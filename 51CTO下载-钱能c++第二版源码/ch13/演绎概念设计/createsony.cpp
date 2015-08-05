//=====================================
// createsony.cpp
//=====================================
#include"createsony.h"
//-------------------------------------
Sony* createSonyInch29(CreateSony* sp){
  return sp->createInch29();
}//------------------------------------
Sony* createSonyInch43(CreateSony* sp){
  return sp->createInch43();
}//------------------------------------
CreateSony* createCreateSony(int a){
  switch(a){
    case  0: return createPureflat();
    case  1: return createPlasma();
    case  2: return createLiquidCrystal();
    default: return 0;
  }
}//------------------------------------

 