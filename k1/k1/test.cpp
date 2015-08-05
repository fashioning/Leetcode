#include <iostream>
#include <string>
using namespace std;
union mima
{
	unsigned long birthday;
	int date;
	char *pet;
};

int main()
{
	mima dog;
	cout<<"please input a string"<<endl;
	cin>>dog.birthday;
	cout<<dog.birthday<<endl;
	cin>>dog.date;
	cout<<dog.date<<endl;
	cout<<dog.birthday<<endl;
	return 0;
}