#include<iostream>
using namespace std;


void name()
{
	string name;
	getline(cin,name);
	cout<<"My name is "<<name<<endl;
}

int main()
{
	cout<<"What is your name ?"<<endl;
	name();
	
	return 0;
}
