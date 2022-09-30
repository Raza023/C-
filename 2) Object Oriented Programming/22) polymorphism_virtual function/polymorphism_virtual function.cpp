#include<iostream>
#include<string>

using namespace std;

class A
{
public:
	virtual void whoiam() const
	{
		cout<<"I am A."<<endl;
	}
};

class B: public A
{
public:
	void whoiam() const final
	{
		cout<<"I am B."<<endl;
	}
};

class C: public B
{
public:
	virtual void whoiam()
	{
		cout<<"I am C."<<endl;
	}
	void print()
	{
		cout<<"printing C"<<endl;
	}
};

class D final: public C
{
public:
	void whoiam() override
	{
		cout<<"I am D."<<endl;
	}
};


void print(A &a)
{
	a.whoiam();
}

int main()
{
	A a;
	B b;
	C c;
	D d;
	
	print(a);
	print(b);
	print(c);
	print(d);
	
	A *ptrA;
	ptrA=&c;
	
	ptrA->whoiam();
	//ptrA->print();
	return 0;
}
