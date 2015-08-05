//=====================================
// f1304.cpp
// Sony Application with Abstract Programming
//=====================================
#include"createsony.h"
#include"sony.h"
enum Technology{PUREFLAT, PLASMA, LIQUIDCRYSTAL};
//-------------------------------------
void fn(Sony* s){
  s->adjustVolume();
  s->switchChannel();
}//------------------------------------
void createSonyObject(CreateSony* sp){
  Sony* s29 = createSonyInch29(sp);
  Sony* s43 = createSonyInch43(sp);
  fn(s29);
  fn(s43);
  delete s29;
  delete s43;
}//------------------------------------
int main(){
  if(CreateSony* sp = createCreateSony(PLASMA)){
    createSonyObject(sp);
    delete sp;
  }
}//====================================

 