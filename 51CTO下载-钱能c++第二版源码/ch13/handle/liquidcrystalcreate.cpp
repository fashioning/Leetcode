//=====================================
// liquidcrystalcreate.cpp
//=====================================
#include"liquidcrystalcreate.h"
#include"c29.h"
#include"c43.h"
//-------------------------------------
Sony* LiquidCrystalCreate::createInch29(){
  return new C29();
}//------------------------------------
Sony* LiquidCrystalCreate::createInch43(){
  return new C43();
}//------------------------------------
CreateSony* createLiquidCrystal(){ return new LiquidCrystalCreate(); }
//-------------------------------------

 