//=====================================
// f1503.cpp
// 单个函数中的异常
//=====================================
#include<fstream>
#include<iostream>
using namespace std;
//-------------------------------------
int main(int argc, char** argv){
  ifstream in(argv[1]);
  try{
    if(!in) throw string(argv[1]);
  }catch(string s){
    cout<<s+" File Opening Error.\n";
    return 1;
  }
  for(string s; getline(in, s); cout<<s<<endl );
}//====================================

 