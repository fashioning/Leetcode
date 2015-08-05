//=====================================
// liquidcrystalcreate.h
//=====================================
#ifndef HEADER_LIQUIDCRYSTALCREATE
#define HEADER_LIQUIDCRYSTALCREATE
#include"createsony.h"
//-------------------------------------
class LiquidCrystalCreate : public CreateSony{
public:
  Sony* createInch29();
  Sony* createInch43();
 ~LiquidCrystalCreate(){}
};//-----------------------------------
#endif  // HEADER_LIQUIDCRYSTALCREATE

 