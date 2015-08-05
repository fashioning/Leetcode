//=====================================
// joseson.h
//=====================================
#ifndef HEADER_JOSESON
#define HEADER_JOSESON
//-------------------------------------
#include"jose.h"
//-------------------------------------
class JoseSon : public Jose{
protected:
  int w;
public:
  JoseSon(int boys, int interval, int start=1, int wins=1);
  void getWinner()const;
};//===================================
#endif  // HEADER_JOSESON

 