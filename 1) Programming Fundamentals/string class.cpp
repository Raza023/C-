#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name="Hassan Raza";
	cout<<name;
	cout<<"\nEnter your name: ";
	getline(cin,name);
	cout<<name<<endl;
	return 0;
}
