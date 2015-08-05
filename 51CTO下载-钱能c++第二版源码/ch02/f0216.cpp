//=====================================
// f0216.cpp
// °ÙÇ®Âò°Ù¼¦
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  for(int cock=1; cock<=13; ++cock)
  for(int hen=1; hen<=18; ++hen)
    if((100-cock-hen)%3==0 && 7*cock+5*hen+(100-cock-hen)/3==100)
      cout<<"cock:"<<cock<<", hen:"<<hen<<", chick:"<<100-cock-hen<<endl;
}//====================================

 