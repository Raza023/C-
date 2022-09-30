/*
01-12-2020

multilevel
A
^
|
B
^
|
C

Virtual  Inheritance

 S
 ^
_|_
|  |
A  B
^  ^
|__|
 |
 C

*/

#include<iostream>
#include<string>

using namespace std;

class Super
{
public:
	Super()
	{
		cout<<"Super created."<<endl;
	}
	~Super()
	{
		cout<<"Super died."<<endl;
	}
	void whoiam()
	{
		cout<<"I am a super hero."<<endl;
	}
};

class A: virtual public Super
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

class B: virtual public Super
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
	A a;
	a.whoiam();
	B b;
	b.whoiam();   //chala ga.
	C c;          //super now called once
	c.whoiam();  //is ambigous before virtual
	c.A::print(); //for naming conflict
	c.B::print();
	return 0;
}
