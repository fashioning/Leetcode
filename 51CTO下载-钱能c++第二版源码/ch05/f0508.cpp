//=====================================
// f0508.cpp
// 函数指针向量
//=====================================
#include<iostream>
#include<vector>
using namespace std;
//-------------------------------------
typedef void (*MenuFun)();
void f1(){ cout<<"good!\n";   }
void f2(){ cout<<"better!\n"; }
void f3(){ cout<<"best!\n";   }
//-------------------------------------
int main(){
  vector<MenuFun> fun(3);
  fun[0]=f1, fun[1]=f2, fun[2]=f3;
  for(int choice=1; choice; ){
    cout<<"1-----display good\n"
         <<"2-----display better\n"
         <<"3-----display best\n"
         <<"0-----exit\n"
         <<"Enter your choice:";
    cin>>choice;
    if(choice>0 && choice<4) fun[choice-1]();
    else if(choice==0) return 0;
    else cout<<"you entered a wrong key.\n";
  }
}//====================================

 