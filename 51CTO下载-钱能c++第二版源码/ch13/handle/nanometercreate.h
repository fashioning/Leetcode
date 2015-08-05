//=====================================
// nanometercreate.h
//=====================================
#ifndef HEADER_NANOMETERCREATE
#define HEADER_NANOMETERCREATE
#include"createsony.h"
//-------------------------------------
class NanometerCreate : public CreateSony{
public:
  Sony* createInch29();     // Create B29 Object
  Sony* createInch43();     // Create B43 Object
 ~NanometerCreate(){}
};//-----------------------------------
#endif  // HEADER_NANOMETERCREATE

 