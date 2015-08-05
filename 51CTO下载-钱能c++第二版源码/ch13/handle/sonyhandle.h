//=====================================
// sonyhandle.h
//=====================================
#ifndef HEADER_SONYHANDLE
#define HEADER_SONYHANDLE
//-------------------------------------
#include"sony.h"
//-------------------------------------
class SonyHandle{
  Sony* sp;
  int* count;
public:
  SonyHandle(Sony* pp) : sp(pp), count(new int(1)){}
  SonyHandle(const SonyHandle& sh):sp(sh.sp),count(sh.count){ (*count)++; }
  Sony* operator->(){ return sp; }
  SonyHandle& operator=(const SonyHandle& sh){
    if(sh.sp == sp) return *this;  // 本来就指向同一个对象的情况
    (*this).~SonyHandle();
    sp = sh.sp;
    count = sh.count;
    (*count)++;
    return *this;
  }
 ~SonyHandle(){
    if(--(*count)==0){
      delete sp;
      delete count;
    }
  }
};//-----------------------------------
#endif  // HEADER_SONYHANDLE

 