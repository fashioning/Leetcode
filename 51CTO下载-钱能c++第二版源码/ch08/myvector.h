//=====================================
// myvector.h
//=====================================
#ifndef HEADER_VECTOR
#define HEADER_VECTOR
class Matrix;
class Vector{
  int* v;
  int sz;
public:
  void remove(){ delete[] v; }
  void set(int);
  int& operator[](int);
  int size(){ return sz; }
  void display();
  friend Vector multiply(Matrix& m, Vector& v);
};//-----------------------------------
#endif  //HEADER_VECTOR

 