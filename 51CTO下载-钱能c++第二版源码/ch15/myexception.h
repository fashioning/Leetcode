//=====================================
// myexception.h
//=====================================
#ifndef HEADER_MYEXCEPTION
#define HEADER_MYEXCEPTION
class MyException{
public:
  virtual const char* what(){ return "MyException"; }
};//-----------------------------------
class HardwareErr : public MyException{
public:
  virtual const char* what(){ return "HardwareErr"; }
};//-----------------------------------
class SizeErr : public MyException{
public:
  virtual const char* what(){ return "SizeErr"; }
};//-----------------------------------
class VSizeErr : public SizeErr{
public:
  virtual const char* what(){ return "VSizeErr"; }
};//-----------------------------------
class HSizeErr : public SizeErr{
public:
  virtual const char* what(){ return "HSizeErr"; }
};//-----------------------------------
class PerformErr : public MyException{
public:
  virtual const char* what(){ return "PerformErr"; }
};//-----------------------------------
class OtherErr : public MyException{
public:
  virtual const char* what(){ return "OtherErr"; }
};//-----------------------------------
#endif  // HEADER_MYEXCEPTION

 