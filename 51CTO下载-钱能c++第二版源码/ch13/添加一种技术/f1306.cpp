//=====================================
// f1306.cpp
// Sony Derived from Sony
//=====================================
#include"createsony.h"
#include"sony2.h"
enum Technology{ PUREFLAT, PLASMA, LIQUIDCRYSTAL, NANOMETER };
//-------------------------------------
void fn(Sony* s){
  Sony2* ps2 = dynamic_cast<Sony2*>(s);  // added
  if(ps2) ps2->adjustLight();            // else don't use it
  ps2->adjustVolume();
  ps2->switchChannel();
}//------------------------------------
void createSonyObject(CreateSony* sp){
  Sony* s29 = createSonyInch29(sp);
  fn(s29);
  delete s29;
}//------------------------------------
int main(){
  if(CreateSony* sp = createCreateSony(NANOMETER)){
    createSonyObject(sp);
    delete sp;
  }
}//====================================

 