//=====================================
// f1514.cpp
// n queen's problem sulotion
//=====================================
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
//-------------------------------------
typedef vector<vector<int> > Mat;
void queen(int r, int c, Mat);
void print(const Mat& m);
//-------------------------------------
int main(){
  ifstream in("queen.in");
  for(int n; in>>n; )
    try{
      Mat m(n, vector<int>(n,0));
      for(int i=0; i<n; ++i) queen(0,i,m);
      cout<<"NoSolutions\n\n";
    }catch(Mat& m){ print(m); }
}//------------------------------------
void queen(int r, int c, Mat m){
  m[r][c] = 2;
  for(int k=1; k<m.size()-r; ++k){
    m[r+k][c]=1;
    if(c-k>=0) m[r+k][c-k]=1;
    if(c+k<m.size()) m[r+k][c+k]=1;
  }
  for(int j=0; j<m.size(); ++j)
    if(m[r+1][j]==0)
      if(r+2==m.size()){ m[r+1][j]=2; throw m; }
      else queen(r+1,j,m);
}//------------------------------------
void print(const Mat& m){
  for(int i=0; i<m.size(); ++i){
    for(int j=0; j<m.size(); ++j)
      cout<<(m[i][j]==2 ? '*' : '-');
    cout<<"\n";
  }
  cout<<"\n";
}//====================================

 