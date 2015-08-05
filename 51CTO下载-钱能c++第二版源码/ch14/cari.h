//=====================================
// cari.h
//=====================================
#ifndef HEADER_CARI
#define HEADER_CARI
//-------------------------------------
#include"car.h"
#include<iostream>
using namespace std;
//-------------------------------------
class Car1 : public Car{
public:
  void open()const{ std::cout<<"Open the Car1 door.\n"; }
};//-----------------------------------
class Car2 : public Car{
public:
  void open()const{ std::cout<<"Open the Car2 door.\n"; }
};//-----------------------------------
class Car21 : public Car2{
public:
  void open()const{ std::cout<<"Open the Car21 door.\n"; }
};//-----------------------------------
class Car22 : public Car2{
public:
  void open()const{ std::cout<<"Open the Car22 door.\n"; }
};//-----------------------------------
#endif  // HEADER_CARI

 