//=====================================
// f1501.cpp
// exit when meet an error
//=====================================
#include<fstream>
#include<iostream>
#include<cmath>
using namespace std;
//-------------------------------------
void fn(){
  ifstream in("abc.txt");
  if(!in){ cout<<"Error: open file failure.\n"; exit(1); }
  for(int a; in>>a; cout<<sqrt(a*1.0)<<"\n")
    if(a<0){ cout<<"Error: read in illegle data.\n"; exit(1); }
}//------------------------------------
int main(){ fn(); }
//=====================================

 