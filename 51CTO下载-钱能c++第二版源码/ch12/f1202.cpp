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
  fn(s);    // ��ʾѧ����Ϣ
  fn(gs);   // ��ʾ�о�����Ϣ
}//====================================

 