//=====================================
// f1204.cpp
// Had to Modify User's Code
//=====================================
#include"student.h"
#include"graduatestudent.h"
#include"doctor.h"
//-------------------------------------
void fn(Student& x){
  switch(x.type){
    case Student::STUDENT:
      x.calcTuition(); break;
    case Student::GRADUATESTUDENT:{
      GraduateStudent& gx = static_cast<GraduateStudent&>(x);
      gx.calcTuition(); break;}
    case Student::DOCTOR:{
      Doctor& dx = static_cast<Doctor&>(x);
      dx.calcTuition(); break;}
  }
}//------------------------------------
int main(){
  Student s("Lo lee undergrade");
  GraduateStudent gs("Jony");
  Doctor ds("smith");
  fn(s);
  fn(gs); 
  fn(ds);
}//====================================

 