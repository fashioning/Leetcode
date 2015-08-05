//=====================================
// f1307.cpp
// sony handle application
//=====================================
#include"createsony.h"
#include"sonyhandle.h"
enum { PUREFLAT, PLASMA, LIQUIDCRYSTAL, NANOMETER };
//-------------------------------------
void fsh(SonyHandle& sh){
  sh->adjustVolume();
  sh->switchChannel();
}//------------------------------------
void createSonyObject(CreateSony* sp){
  SonyHandle sh29(createSonyInch29(sp));
  SonyHandle sh43(createSonyInch43(sp));
  fsh(sh29);
  fsh(sh43);
}//------------------------------------
int main(){
  if(CreateSony* sp = createCreateSony(PLASMA)){
    createSonyObject(sp);
    delete sp;
  }
}//====================================

 