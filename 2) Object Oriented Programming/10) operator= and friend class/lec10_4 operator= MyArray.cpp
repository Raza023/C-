#include <iostream>
#include <string>
#include "MyArray.h"
#include "MyArray.cpp"
using namespace std;


int main()
{
	MyArray array(5); 
	MyArray arr(5);               //assigning must use operator= for it.
	for (int i = 0; i < 5; i++)   //values stored but must be removed in operator=
		arr.addElement(i);
		
	int a;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter value: "; 
		cin >> a; 
		array.addElement(a);
	}
	
	//MyArray arr=array;   //Initializing
	arr=array;		           //assigning must use operator= for it.
	//MyArray arr3;
	//arr3=arr=array         //cant do this as return type is void.
	
	cout << "Array has following elements: "<<endl; 
	for (int i = 0; i < 5; i++)
	{
		cout << arr.getElement(i) << endl;
	}
	return 0;
}
