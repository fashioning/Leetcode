//=====================================
// f1513.cpp
// ∑«¥ÌŒÛ“Ï≥£
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
void printYesOrNoPrime(int m){
  try{
    for(int i=2; i<m; ++i)
      if(m%i==0) throw "no";
    cout<<"yes\n";
  }catch(char* p){
    cout<<p<<"\n";
  }
}//------------------------------------
int main(){
  printYesOrNoPrime(19);
}//====================================

 