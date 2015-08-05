//=====================================
// f1504.cpp
// “Ï≥£∑Ω Ω
//=====================================
#include<fstream>
#include<iostream>
using namespace std;
//-------------------------------------
void procFileName(string s);
void procOpenMode(string s);
void openIn(string s);
void openOut(string s);
//-------------------------------------
int main(){
  procFileName("iabc");
  procFileName("oabc");
}//------------------------------------
void procFileName(string s){
  try{
    for(char c='0'; c<='9'; c++) procOpenMode(s + c+".txt");
  }catch(string s){
    cout<<"error opening "<<s<<" not existed.\n";
  }
}//------------------------------------
void procOpenMode(string s){
  if(s[0]=='i') openIn(s);
  else openOut(s);
}//------------------------------------
void openIn(string s){
  ifstream in(s.c_str());
  if(!in) throw s+" inFile";
  for(string line; getline(in, line); cout<<line<<"\n");
}//------------------------------------
void openOut(string s){
  fstream out(s.c_str(),ios::in|ios::out|ios::ate);
  if(!out) throw s+string(" outFile");
  out<<s+" outFile is ok.\n";
  cout<<s+" is here.\n";
}//====================================

 