#include <iostream>
#include "MyClass.h"
#include "MyClass.cpp"
using namespace std; 

//static life is global but scope is local

void func()
{
	static int objectCount;   //by default initialized by zero; created one time.
	objectCount++;
	cout<<objectCount<<endl;
}

int main()
{
	MyClass s;
	cout<<s.getobjectCount()<<endl;
	MyClass s2;
	cout<<s2.getobjectCount()<<endl;
	return 0;
}
