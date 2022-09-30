#include<iostream>
using namespace std;


int main()
{
	int a=10;
	int *ptr=&a;	
	int **dptr=&ptr;
	
	cout<<ptr<<endl;         //a ka address
	cout<<*ptr<<endl;        //a ki value
	cout<<dptr<<endl;        //ptr ka address
	cout<<*dptr<<endl;       //a ka address
	cout<<**dptr<<endl;      //a ki value
	
	return 0;
}

