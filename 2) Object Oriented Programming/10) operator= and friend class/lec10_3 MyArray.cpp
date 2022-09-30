#include <iostream>
#include <string>
#include "MyArray.h"
using namespace std;

/*
MyArray::MyArray(MyArray &a)  //compiler constructor we should write our own for when dynamic.
{
	size=a.size;
	arr=a.arr;
}
*/

MyArray::MyArray(MyArray &myArr)  //compiler constructor we should write our own for it.
{
	cout<<"****Copy Constructor called****"<<endl;
	size=myArr.size;
	index = myArr.index;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = myArr.arr[i];
	}
}

MyArray::MyArray(int s)
{
	cout<<"****Constructor called****"<<endl;
	if (s > 0)
	{
		size = s;
		index = 0;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
	}
	else
	{
		cout << "Invalid array size" << endl;
	}
}

MyArray::~MyArray()
{
	delete[]arr;
	arr = NULL;
	cout << "~~~~Destructor is Called~~~~ " << endl;
}

void MyArray::addElement(int val)
{
	if (index < size)
	{
		arr[index] = val;
		index++;
	}
	else
		cout << "Array is full" << endl;
}

int MyArray::getElement(int i)
{
	if (i >= 0 && i < size)
		return arr[i];
	else
	{
		cout << "invalid index" << endl;
		return -1;
	}
}

int main()
{
	MyArray array(5); 
	int a;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter value: "; 
		cin >> a; 
		array.addElement(a);
	}
	
	MyArray arr=array;   //Iniitializing.

	cout << "Array has following elements: "<<endl; 
	for (int i = 0; i < 5; i++)
	{
		cout << arr.getElement(i) << endl;
	}
	return 0;
}
