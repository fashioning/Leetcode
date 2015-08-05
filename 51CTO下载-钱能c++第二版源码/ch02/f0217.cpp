//=====================================
// f0217.cpp
// °ÙÇ®Âò°Ù¼¦
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  for(int cock=1; cock<=13; ++cock)
  for(int hen=1,chick=99-cock; hen<=18; ++hen, chick--)
    if(chick%3==0 && 7*cock+5*hen+chick/3==100)
      cout<<"cock:"<<cock<<", hen:"<<hen<<", chick:"<<chick<<endl;
}//====================================

 