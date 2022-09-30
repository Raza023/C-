#include <iostream>
#include<string>
#include<iomanip>

#include "MyArray.h"
#include "MyArray.cpp"

using namespace std;



int main()
{
	MyArray array(5);   //parametrized
	int a;
	for(int i=0;i<5 ;i++)
	{
		cout<<"Enter value: ";
		cin>>a;
		array.addElement(a);
	}
	array.addElement(100);
	cout<<"Array has following elements: ";
	for(int i=0;i<5;i++)
	{
		cout<<array.getElement(i)<<endl;
	}
	return 0; 
}
