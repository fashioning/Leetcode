//=====================================
// f1403.cpp
// explicit cast for template type match
//=====================================
#include<iostream>
//-------------------------------------
template<typename T>
T const& max(T const& a, T const& b){  // const reference type
  return a < b ? b : a;
}//------------------------------------
int main(){
  int ia=3;
  double db=6.7;
  std::cout<< max<double>(ia, db)<<"\n";
  std::cout<< max(static_cast<double>(ia), db)<<"\n";
}//====================================

 