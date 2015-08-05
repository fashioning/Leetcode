//=====================================
// f0915.cpp
// class conversion
//=====================================
#include<iostream>
using namespace std;
class Student{
  string name;
public:
  Student(const string& s):name(s){}
};//-----------------------------------
void fn(Student& s){  cout<<"ok\n"; }
//-------------------------------------
int main(){
  fn(string("Jenny"));
}//====================================

 