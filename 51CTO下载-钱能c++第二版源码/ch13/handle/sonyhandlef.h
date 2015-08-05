//=====================================
// sonyhandlef.h
//=====================================
#ifndef HEADER_SONYHANDLE
#define HEADER_SONYHANDLE
//-------------------------------------
#include"sony.h"
//-------------------------------------
class SonyHandle{
  Sony* sp;
public:
  Sony* operator->(){ return sp; }
  SonyHandle(Sony* pp) : sp(pp){}
};//-----------------------------------
#endif  // HEADER_SONYHANDLE

 