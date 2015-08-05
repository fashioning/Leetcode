//=====================================
// f0511.cpp
// 打开main参数为名字的文件
//=====================================
#include<iostream>
#include<fstream>
using namespace std;
//-------------------------------------
int main(int argc, char** argv){
  if(argc!=3)
    cout<<"Usage: f0511 infile outfile\n";
  else{
    ifstream in(argv[1]);
    ofstream out(argv[2]);
    if(in && out)
      out<<in.rdbuf();
  }
}//====================================

 