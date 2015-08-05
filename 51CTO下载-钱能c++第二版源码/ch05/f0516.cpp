//=====================================
// f0516.cpp
// ÷ÿ‘ÿ∫Ø ˝∞Ê±æ
//=====================================
#include<iostream>
#include<vector>
using namespace std;
//-------------------------------------
void print(const vector<int>& a);
void print();
bool process(vector<int>& a);
//-------------------------------------
int main(){
  vector<int> a(10, 11);
  if(process(a)) print(a);
  else           print();
  getchar();
}//------------------------------------
void print(){
  cout<<"failed.\n";
}//------------------------------------
void print(const vector<int>& a){
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

 
