//=====================================
// pureflatcreate.cpp
//=====================================
#include"pureflatcreate.h"
#include"a29.h"
#include"a43.h"
//-------------------------------------
Sony* PureflatCreate::createInch29(){
  return new A29();
}//------------------------------------
Sony* PureflatCreate::createInch43(){
  return new A43();
}//------------------------------------
CreateSony* createPureflat(){ return new PureflatCreate(); }
//-------------------------------------

 