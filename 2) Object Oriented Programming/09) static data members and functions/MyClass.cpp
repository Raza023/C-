#include "MyClass.h"
#include <iostream>
using namespace std; 

int MyClass::objectCount=0;  //initialize, by default initialized by zero

MyClass::MyClass(int x, int y)
{
	cout << "Class constructor called........." << endl;
	a = x;
	b = y;
	objectCount++;
}
int MyClass::getValue()
{
	return a * b;
}
int MyClass::getobjectCount()
{
	return objectCount;
}

