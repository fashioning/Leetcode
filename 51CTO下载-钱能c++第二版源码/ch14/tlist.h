//=====================================
// tlist.h
// List Template Definition
//=====================================
#ifndef TLIST
#define TLIST
#include<iostream>
using namespace std;
//-------------------------------------
template<typename T>
struct Node{
  Node(const T& d):c(d),next(0),pref(0){}
  T c;
  Node *next, *pref;
};//-----------------------------------
template<typename T>
class List{
  Node<T> *first, *last;
public:
  List();
  void add(const T& c);
  void remove(const T& c);
  Node<T>* find(const T& c)const;
  void print()const;
 ~List();
};//-----------------------------------
template<typename T>
List<T>::List():first(0),last(0){}
//-------------------------------------
template<typename T>
void List<T>::add(const T& n){
  Node<T>* p = new Node<T>(n);
  p->next = first;  first = p;
  (last ? p->next->pref : last) = p;
}//------------------------------------
template<typename T>
void List<T>::remove(const T& n){
  if(!(Node<T>* p = find(n))) return;
  (p->next ? p->next->pref : last) = p->pref;
  (p->pref ? p->pref->next : first) = p->next;
  delete p;
}//------------------------------------
template<typename T>
Node<T>* List<T>::find(const T& n)const{
  for(Node<T>* p=first; p; p=p->next)
    if(p->c==n) return p;
  return 0;
}//------------------------------------
template<typename T>
List<T>::~List(){
  for(Node<T>* p; p=first; delete p)
    first = first->next;
}//------------------------------------
template<typename T>
void List<T>::print()const{
  for(Node<T>* p=first; p; p=p->next)
    cout<<p->c<<"  ";
  cout<<"\n";
}//====================================
#endif    // TLIST

 