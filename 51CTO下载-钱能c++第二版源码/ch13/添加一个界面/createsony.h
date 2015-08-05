//=====================================
// createsony.h
//=====================================
#ifndef HEADER_CREATESONY
#define HEADER_CREATESONY
#include"sony.h"
//-------------------------------------
class CreateSony{
public:
  virtual Sony* createInch29() = 0;
  virtual Sony* createInch43() = 0;
  virtual ~CreateSony(){}
};//-----------------------------------
CreateSony* createCreateSony(int); //在createsony.cpp中实现
CreateSony* createPureflat();      //在pureflatcreate.cpp中实现
CreateSony* createPlasma();        //在plasmacreate.cpp中实现
CreateSony* createLiquidCrystal(); //在liquidcrystalcreate.cpp中实现
//CreateSony* createNanometer();     //在nanometercreate.cpp中实现
//-------------------------------------
#endif  // HEADER_CREATESONY

 