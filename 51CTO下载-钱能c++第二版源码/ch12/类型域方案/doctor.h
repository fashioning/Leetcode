//=====================================
// doctor.h
//=====================================
#ifndef HEADER_DOCTOR
#define HEADER_DOCTOR
//-------------------------------------
#include"graduatestudent.h"
#include<iostream>
//-------------------------------------
class Doctor : public GraduateStudent{
public:
  Doctor(string pName="noName"):GraduateStudent(pName){ type = DOCTOR; }
  void calcTuition(){std::cout<<"Doctor tuition calculation.\n";}
};//-----------------------------------
#endif  // HEADER_DOCTOR
 