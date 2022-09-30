 /*
01-12-2020

Multiple Inheritance

A  B
^  ^
|__|
 |
 C

*/

#include<iostream>
#include<string>

using namespace std;

class A
{
public:
	A()
	{
		cout<<"Constructing A."<<endl;
	}
	void print()
	{
		cout<<"Printing from A...."<<endl;
	}
	~A()
	{
		cout<<"Destructing A."<<endl;
	}
};

class B
{
public:
	B()
	{
		cout<<"Constructing B."<<endl;
	}
	void print()
	{
		cout<<"Printing from B...."<<endl;
	}
	~B()
	{
		cout<<"Destructing B."<<endl;
	}
};

class C: public A,public B //pahla A phir b phir c
{
public:
	C()
	{
		cout<<"Constructing C."<<endl;
	}
	~C()
	{
		cout<<"Destructing C."<<endl;
	}
};

int main()
{
	C c;
	c.A::print(); //for naming conflict
	c.B::print();
	return 0;
}
