//=====================================
// f0911.cpp
// constructing object demanding extra memory
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
 ~Person(){
    cout <<"Destructing "<<pName<<"\n";
    delete[] pName;
  }
};//-----------------------------------
int main(){
  Person p1("Randy");
  Person p2;
}//====================================

 