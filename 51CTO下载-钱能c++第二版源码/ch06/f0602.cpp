//=====================================
// f0602.cpp
// 将小函数"融化"在调用处
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  for(char c; cin>>c && c!='\n'; )
    if(c>='0' && c<='9' ? 1 : 0)      //  将调用改为直接判断
      cout<<"you entered a digit.\n";
    else cout<<"you entered a non-digit.\n";
}//====================================

 