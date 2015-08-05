//=====================================
// f1202.cpp
// Sub-class Assimilated
//=====================================
#include"student.h"
#include"graduatestudent.h"
//-------------------------------------
void fn(Student& x){ x.display(); }
//-------------------------------------
int main(){
  Student s("Lo lee undergrade");
  GraduateStudent gs("Jony");
  fn(s);    // 显示学生信息
  fn(gs);   // 显示研究生信息
}//====================================

 