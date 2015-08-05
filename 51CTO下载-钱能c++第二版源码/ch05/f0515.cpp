//=====================================
// f0515.cpp
// 别扭的参数默认
//=====================================
#include<iostream>
#include<vector>
using namespace std;
//-------------------------------------
vector<int> b(10, 2);
void print(const vector<int>& a = b);
bool process(vector<int>& a);
//-------------------------------------
int main(){
  vector<int> a(10, 5);
  if(process(a))  print(a);
  else            print();
  getchar();
}//------------------------------------
void print(const vector<int>& a){
  if(a==vector<int>(10, 0)){
    cout<<"failed.\n";
    return;
  }
  for(int i=0; i<a.size(); ++i)
    cout<<a[i]<<" ";
  cout<<"\n";
}//------------------------------------
bool process(vector<int>& a){
  int sum = 0;
  for(int i=0; i<a.size(); ++i) sum += a[i];
  if(sum>100) return true;
  else return false;
}//====================================

 
