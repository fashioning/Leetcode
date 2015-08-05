//=====================================
// f0501.cpp
// 向量参数传递
//=====================================
#include<vector>
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
//-------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
void print(const VI&);
void input(VVI&);
bool findVec(const VVI&, VI&);
//-------------------------------------
int main(){
  VVI matrix;
  input(matrix);
  VI vec;
  if(findVec(matrix, vec))
    print(vec);
    getchar();
}//------------------------------------
void print(const VI& v){
  for(int i=0; i<v.size(); ++i)
    cout<<v[i]<<" ";
  cout<<"\n";
}//------------------------------------
void input(VVI& m){
  ifstream in("abc.in");
  int n, t;  in>>n;
  m.resize(n);
  for(string s; n-- && getline(in, s); )
    for(istringstream sin(s); sin>>t; m[m.size()-n-1].push_back(t));
}//------------------------------------
bool findVec(const VVI& matrix, VI& v){
  for(int i=0; i<matrix.size(); ++i)
  for(int j=0; j<matrix[i].size(); ++j)
    if(matrix[i][j]==-1){
      v = matrix[i];
      return true;
    }
  return false;
}//====================================

 
