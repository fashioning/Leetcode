//=====================================
// f1407.cpp
// Using Class Template Specialization
//=====================================
#include<iostream>
using namespace std;
//-------------------------------------
template<typename T>
struct Node{
  Node(const T& d):c(d),next(0),pref(0){}
  T c;
  Node *next, *pref;
};//-----------------------------------
// 以下为基本类模板
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
  Node<T>* p = find(n);
  if(!p) return;
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
}//------------------------------------
class Cat{
  string name;
public:
  Cat(const string& n):name(n){}
  bool operator==(const Cat& c){ return name == c.name; }
  friend ostream& operator<<(ostream& o, const Cat& c){ return o<<c.name; }
};//-----------------------------------
// 以下为模板定做
template<>
class List<Cat>{
  Node<Cat> *first, *last;
public:
  List();
  void add(const Cat& c);
  void remove(const Cat& c);
  Node<Cat>* find(const Cat& c)const;
  void print()const;
 ~List();
};//-----------------------------------
List<Cat>::List():first(0),last(0){}
//-------------------------------------
void List<Cat>::add(const Cat& n){    // 与类模板的成员函数实现上有差异
  if(find(n)) return;
  Node<Cat>* p = new Node<Cat>(n);
  p->next = first;  first = p;
  (last ? p->next->pref : last) = p;
}//------------------------------------
void List<Cat>::remove(const Cat& n){
  Node<Cat>* p = find(n);
  if(!p) return;
  (p->next ? p->next->pref : last) = p->pref;
  (p->pref ? p->pref->next : first) = p->next;
  delete p;
}//------------------------------------
Node<Cat>* List<Cat>::find(const Cat& n)const{
  for(Node<Cat>* p=first; p; p=p->next)
    if(p->c==n) return p;
  return 0;
}//------------------------------------
List<Cat>::~List(){
  for(Node<Cat>* p; p=first; delete p)
    first = first->next;
}//------------------------------------
void List<Cat>::print()const{
  for(Node<Cat>* p=first; p; p=p->next)
    cout<<p->c<<"  ";
  cout<<"\n";
}//------------------------------------
int main(){
  List<Cat> cList;
  cList.add(string("alice"));
  cList.add(string("luise"));
  cList.add(string("luise"));
  cList.print();
  List<int> iList;
  iList.add(5);
  iList.add(8);
  iList.add(8);
  iList.print();
}//====================================

 