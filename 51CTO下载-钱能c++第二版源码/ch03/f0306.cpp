//=====================================
// f0306.cpp
// ���ж����ٷֽ����
//=====================================
#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;
//-------------------------------------
int main(){
  ifstream in("aaa.txt");
  for(string s; getline(in, s); ){
    int a, sum=0;
    for(istringstream sin(s); sin>>a; sum += a);
    cout<<sum<<endl;
  }
}//====================================

 