//=====================================
// mymatrix.cpp
//=====================================
#include"mymatrix.h"
#include"myvector.h"
#include<iostream>
using namespace std;
//-------------------------------------
void Matrix::set(int i, int j){
  szl = i; szr = j;
  if(i<=0 || j<=0){
    cerr <<"bad Matrix size.\n";
    exit(1);
  }
  m = new int[i*j];
}//------------------------------------
int& Matrix::elem(int i, int j){      //���÷��ص�Ŀ���Ƿ���ֵ��������ֵ
  if(i<0||szl<=i||j<0||szr<=j){
    cerr <<"Matrix index out of range.\n";
    exit(1);
  }
  return m[i*szr+j];
}//------------------------------------
Vector multiply(Matrix& m, Vector& v){  //���������
  if(m.sizeR()!=v.size()){
    cerr <<"bad multiply Matrix with Vector.\n";
    exit(1);
  }
  Vector r;
  r.set(m.sizeL());       //����һ����Ž���Ŀ�����
  for(int i=0; i<m.sizeL(); i++){
    r[i] = 0;
    for(int j=0; j<m.sizeR(); j++)
      r[i] += m.elem(i,j) * v[j];
  }
  return r;
}//------------------------------------
 