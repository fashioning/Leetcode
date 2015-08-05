//=====================================
// f0917.cpp
// copy constructor
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
class Person{
  char* pName;
public:
  Person(char* pN="noName"){
    cout<<"Constructing "<<pN<<"\n";
    pName = new char[strlen(pN)+1];
    if(pName) strcpy(pName,pN);
  }
  Person(const Person& s){
    cout<<"copy Constructing "<<s.pName<<"\n";
    pName = new char[strlen(s.pName)+1];
    if(pName) strcpy(pName, s.pName);
  }
  Person& operator=(Person& s){
    cout<<"Assigning "<<s.pName<<"\n";
    if(this==&s) return s;
    delete[] pName;
    pName = new char[strlen(s.pName)+1];
    if(pName) strcpy(pName,s.pName);
    return *this;
  }
 ~Person(){
    cout <<"Destructing "<<pName<<"\n";
    delete[] pName;
  }
};//-----------------------------------
int main(){
  Person p1("Randy");
  Person p2("Jenny");
  p2 = p1;
}//====================================

 