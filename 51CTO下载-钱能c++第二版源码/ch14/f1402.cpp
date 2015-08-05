//=====================================
// f1402.cpp
// template parameter match problem
//=====================================
template<typename T>
void swap(T& a, T& b){
  T temp=a; a=b; b=temp;
}//------------------------------------
int add(double a, double b){
  return a+b;
}//------------------------------------
int main(){
  int ia=3;
  double db=5.0;
  char s1[]="good", s2[]="better";
  int x = add(ia, db);  // ok
  swap(ia, db);          // error
  swap(s1, s2);          // error
}//====================================

 