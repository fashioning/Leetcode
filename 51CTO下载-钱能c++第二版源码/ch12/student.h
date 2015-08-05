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
    double totalGrade = (semesterHours * average + grade);   //�ܷ�
    semesterHours += hours;                                        //����ѧʱ
    average = semesterHours ? totalGrade/semesterHours : 0; //ƽ����
  }
  void display(){
    cout<<"name=\""<<name<<"\""<<", hours="<<semesterHours
         <<", average="<<average<<"\n";
  }
  int getHours(){ return semesterHours; }
  double getAverage(){ return average; }
};//-----------------------------------
#endif   // HEADER_STUDENT


 