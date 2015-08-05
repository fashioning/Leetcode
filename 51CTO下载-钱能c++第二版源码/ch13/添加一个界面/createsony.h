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
CreateSony* createCreateSony(int); //��createsony.cpp��ʵ��
CreateSony* createPureflat();      //��pureflatcreate.cpp��ʵ��
CreateSony* createPlasma();        //��plasmacreate.cpp��ʵ��
CreateSony* createLiquidCrystal(); //��liquidcrystalcreate.cpp��ʵ��
//CreateSony* createNanometer();     //��nanometercreate.cpp��ʵ��
//-------------------------------------
#endif  // HEADER_CREATESONY

 