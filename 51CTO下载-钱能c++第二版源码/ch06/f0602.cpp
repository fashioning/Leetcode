//=====================================
// f0602.cpp
// ��С����"�ڻ�"�ڵ��ô�
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
int main(){
  for(char c; cin>>c && c!='\n'; )
    if(c>='0' && c<='9' ? 1 : 0)      //  �����ø�Ϊֱ���ж�
      cout<<"you entered a digit.\n";
    else cout<<"you entered a non-digit.\n";
}//====================================

 