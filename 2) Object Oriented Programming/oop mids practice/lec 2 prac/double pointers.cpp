#include<iostream>

using namespace std;

int main()
{
	int a=10;
	int *ptr=&a;
	int **dptr=&ptr;
	
	cout<<"Value of a is:-"<<endl;
	cout<<a<<endl;
	cout<<*ptr<<endl;
	cout<<**dptr<<endl;
	
	cout<<"Address of a:- "<<endl;
	cout<<ptr<<endl;
	cout<<*dptr<<endl;
	
	cout<<"Address of ptr:- "<<endl;
	cout<<dptr<<endl;
	
	return 0;
}
