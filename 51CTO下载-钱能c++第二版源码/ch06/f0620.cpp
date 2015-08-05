//==================================
// f0620.cpp
// 判断字串相等版本四
//==================================
#include<stdio.h>
#include<string.h>
//----------------------------------
int cnt(char* a){
  int num=0;
  while(*a) if(*a++=='1') num++;
  return num;
}//---------------------------------
int main(){
  freopen("string.txt","r",stdin);
  for(char a[1025], b[1025]; scanf("%s",a)>0 && scanf("%s",b)>0; )
    printf("%s",strlen(a)==strlen(b) && cnt(a)==cnt(b) ? "yes\n":"no\n");
}//=================================

 