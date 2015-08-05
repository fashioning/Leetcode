#include<iostream> 
#include<sstream> 
#include<fstream> 
using namespace std; 
int main() 
{ 
    ifstream in( "abc.in" ); 
    for( string s;getline(in,s);)
    {   
    if( s.find("+"));
    cout<<s;
    cout<<endl;
    }  
    getchar(); 
}  

