#include<iostream>
using namespace std;

/*
parent 
child
GRAND-CHILD
*/
class A
{
	int a;
	int b;
public:
	A()
	{
		a=0;
		b=0;
		cout<<"Default A...."<<endl;
	}
	A(int a,int b)
	{
		this->a=a;
		this->b=b;
		cout<<"Parametrized A...."<<endl;
	}
	~A()
	{
		cout<<"destructer A....."<<endl;
	}
	void seta(int a)
	{
		this->a=a;
	}
	void setb(int b)
	{
		this->b=b;
	}
	int geta()
	{
		return a;
	}
	int getb()
	{
		return b;
	}
	void print()
	{
		cout<<"a: "<<this->a<<endl;
		cout<<"b: "<<this->b<<endl;
	}
};

class B: public A
{
	int c;
	int d;
public:
	B():A()
	{
		this->c=0;
		this->d=0;
		cout<<"Default B...."<<endl;
	}
	B(int a,int b,int c,int d):A(a,b)
	{
		this->c=c;
		this->d=d;
		cout<<"Parametrized B...."<<endl;
	}
	~B()
	{
		cout<<"destructer B....."<<endl;
	}
	void setc(int c)
	{
		this->c=c;
	}
	void setd(int d)
	{
		this->d=d;
	}
	int getc()
	{
		return c;
	}
	int getd()
	{
		return d;
	}
	void print()
	{
		cout<<"a: "<<this->geta()<<endl;
		cout<<"b: "<<this->getb()<<endl;
		cout<<"c: "<<this->c<<endl;
		cout<<"d: "<<this->d<<endl;
	}
};

class C: public B
{
	int e;
	int f;
public:
	C():B()
	{
		e=0;
		f=0;
		cout<<"Default C...."<<endl;
	}
	C(int a,int b,int c,int d,int e,int f):B(a,b,c,d)
	{
		this->e=e;
		this->f=f;
		cout<<"Parametrized C...."<<endl;
	}
	~C()
	{
		cout<<"destructer C....."<<endl;
	}
	void sete(int e)
	{
		this->e=e;
	}
	void setf(int f)
	{
		this->f=f;
	}
	int gete()
	{
		return e;
	}
	int getf()
	{
		return f;
	}
	void print()
	{
		cout<<"a: "<<this->geta()<<endl;
		cout<<"b: "<<this->getb()<<endl;
		cout<<"c: "<<this->getc()<<endl;
		cout<<"d: "<<this->getd()<<endl;
		cout<<"e: "<<e<<endl;
		cout<<"f: "<<f<<endl;
	}
}; 

int main()
{
	cout<<"Creating A: "<<endl;
	A a;
	cout<<"Creating B: "<<endl;
	B b;
	cout<<"Creating C: "<<endl;
	C c;
	C obj(2,3,4,5,6,7);
	obj.print();
	return 0;
}
