//=====================================
// student.h
//=====================================
#ifndef HEADER_STUDENT
#define HEADER_STUDENT
//-------------------------------------
#include<iostream>
using namespace std;
//-------------------------------------
class Student{
  string name;
  int semesterHours;
  double average;
public:
  Student(string pName="noName"):name(pName),average(0),semesterHours(0){}
  void addCourse(int hours, double grade){
    double totalGrade = (semesterHours * average + grade);   //总分
    semesterHours += hours;                                        //总修学时
    average = semesterHours ? totalGrade/semesterHours : 0; //平均分
  }
  void display(){
    cout<<"name=\""<<name<<"\""<<", hours="<<semesterHours
         <<", average="<<average<<"\n";
  }
  int getHours(){ return semesterHours; }
  double getAverage(){ return average; }
};//-----------------------------------
#endif   // HEADER_STUDENT


 