//=====================================
// f0407.cpp
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
void print(int I);
//-------------------------------------
int main(){
  for(int I=0; I<32; ++I){
    bool A=I&16, B=I&8, C=I&4, D=I&2, E=I&1;
    if(A && !B)        continue;
    if(!D && !E)       continue;
    if(B == C)         continue;
    if(C != D)         continue;
    if(E && !(A && B)) continue;
    print(I);
  }
}//------------------------------------
void print(int I){
  cout<<(I&16 ? " A ":"~A ")
      <<(I&8 ? " B ":"~B ")
      <<(I&4 ? " C ":"~C ")
      <<(I&2 ? " D ":"~D ")
      <<(I&1 ? " E ":"~E ")<<"\n";
}//====================================

 