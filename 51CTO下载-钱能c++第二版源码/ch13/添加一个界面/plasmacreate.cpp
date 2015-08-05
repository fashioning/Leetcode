//=====================================
// plasmacreate.cpp
//=====================================
#include"plasmacreate.h"
#include"b29.h"
#include"b43.h"
//-------------------------------------
Sony* PlasmaCreate::createInch29(){
  return new B29();
}//------------------------------------
Sony* PlasmaCreate::createInch43(){
  return new B43();
}//------------------------------------
CreateSony* createPlasma(){ return new PlasmaCreate(); }
//-------------------------------------

 