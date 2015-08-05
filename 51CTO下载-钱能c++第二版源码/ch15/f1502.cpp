//=====================================
// f1502.cpp
// error proccess after error
//=====================================
#include<fstream>
#include<iostream>
using namespace std;
//-------------------------------------
void procFileName(string s);
bool procOpenMode(string s);
bool openIn(string s);
bool openOut(string s);
//-------------------------------------
int main(){
  procFileName("iabc");
  procFileName("oabc");
}//------------------------------------
void procFileName(string s){
  for(char c='0'; c<='9'; c++){
    string t = s + c + ".txt";
    if(!procOpenMode(t)){
      cout<<"error opening "<<t<<"\n";
      return;
    }
  }
}//------------------------------------
bool procOpenMode(string s){
  if(s[0]=='i' && openIn(s) || s[0]=='o' && openOut(s))
    return true;
  return false;
}//------------------------------------
bool openIn(string s){
  ifstream in(s.c_str());
  if(!in) return false;
  for(string line; getline(in, line); cout<<line<<"\n");
  return true;
}//------------------------------------
bool openOut(string s){
  fstream out(s.c_str(), ios::in|ios::out|ios::ate);
  if(!out) return false;
  cout<<s+" is here.\n";
  out<<s+" is ok.\n";
  return true;
}//====================================

 