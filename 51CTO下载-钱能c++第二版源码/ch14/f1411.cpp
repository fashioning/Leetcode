//=====================================
// f1411.cpp
// iterator & template
//=====================================
#include<iostream>   // cout
#include<sstream>    // istringstream
#include<iterator>   // ostream_iterator
#include<algorithm>  // sort & unique_copy
#include<vector>     // vector
#include<fstream>    // ifstream
using namespace std;
//-------------------------------------
int main(){
  ifstream cin("uaa.txt");
  for(string s; getline(cin,s); ){
    vector<int> v;  int a;
    for(istringstream sin(s); sin>>a; v.push_back(a));
    sort(v.begin(), v.end());
    unique_copy(v.begin(),v.end(),ostream_iterator<int,char>(cout," "));
    cout<<endl;
  }
}//====================================

 