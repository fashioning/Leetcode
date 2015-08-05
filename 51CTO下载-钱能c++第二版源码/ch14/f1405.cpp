//=====================================
// f1405.cpp
// template overload
//=====================================
#include<iostream>
//-------------------------------------
template<typename T>
T const& max(T const& a, T const& b){
  return a < b ? b : a;
}//------------------------------------
template<typename T>
T* const& max(T* const& a, T* const& b){
  return *a < *b ?  b : a;
}//------------------------------------
const char* const& max(const char* const& a, const char* const& b){
  return std::strcmp(a,b) < 0 ? b : a;
}//------------------------------------
int main(){
  int ia=3, ib=7;
  char* s1="hello";
  char* s2="hell";
  std::cout<<*max(&ia, &ib)<<"\n"; // match the second template
  std::cout<<max(s1, s2)<<"\n";    // match the max function
  std::cout<<max(ia, ib)<<"\n";    // match the first template
}//====================================

 