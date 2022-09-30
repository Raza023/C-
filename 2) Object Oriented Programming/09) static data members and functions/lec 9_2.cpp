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
	//MyClass s[5];
	//cout<<s[1].getvar()<<endl;
	//cout<<s[2].getvar()<<endl;
	MyClass c1;
	MyClass c2[10];
	MyClass c3(5,7);
	cout<<"class: "<<c3.getobjectCount()<<endl;
}
