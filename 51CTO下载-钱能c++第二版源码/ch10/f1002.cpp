//=====================================
// f1002.cpp
// constructing derived class
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
class Advisor{
  int noOfMeeting;
public:
  Advisor(){ cout<<"Adviosr\n"; }
  Advisor(const Advisor& ){ cout<<"copy Advisor\n"; }
 ~Advisor(){ cout<<"~Advisor\n"; }
};//-----------------------------------
class Student{
  string name;
  int semesterHours;
  double average;
public:
  Student(string pName="noName"):name(pName),average(0),semesterHours(0){}
  void addCourse(int hours, double grade){
    double totalGrade = (semesterHours * average + grade);  //总分
    semesterHours += hours;                                       //总修学时
    average = semesterHours ? totalGrade/semesterHours : 0;  //平均分
  }
  void display(){
    cout<<"name=\""<<name<<"\""<<", hours="<<semesterHours
         <<", average="<<average<<"\n";
  }
  int getHours(){ return semesterHours; }
  double getAverage(){ return average; }
 ~Student(){ cout<<"~Student\n"; }
};//-----------------------------------
class GraduateStudent : public Student{
  Advisor advisor;
  int qualifierGrade;
public:
  GraduateStudent(const string& pN, Advisor& adv)
   :Student(pN), advisor(adv), qualifierGrade(0){}
  void display(){
    Student::display();
    cout<<"GraduateStudent\n";
  }
  getQualifier(){ return qualifierGrade; }
};//-----------------------------------
void fn(Advisor& advisor){
  GraduateStudent gs("Yen Kay Doodle", advisor);
  gs.display();
}//------------------------------------
int main(){
  Advisor da;
  fn(da);
}//====================================

 