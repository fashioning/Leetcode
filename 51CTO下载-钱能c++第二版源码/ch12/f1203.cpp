//=====================================
// f1203.cpp
// Type Member & "polymorphism"
//=====================================
#include"student.h"
#include"graduatestudent.h"
//-------------------------------------
void fn(Student& x){
  switch(x.type){
    case Student::STUDENT:
      x.calcTuition(); break;
    case Student::GRADUATESTUDENT:
      GraduateStudent& rx = static_cast<GraduateStudent&>(x);
      rx.calcTuition(); break;
  }
}//------------------------------------
int main(){
  Student ds("Lo lee undergrade");
  GraduateStudent gs("Jony");
  fn(ds); 
  fn(gs); 
}//====================================

 