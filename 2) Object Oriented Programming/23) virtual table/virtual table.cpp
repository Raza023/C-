#include<iostream>
#include<string>

using namespace std;

class base
{
public:
	base()
	{
		cout<<"Base created."<<endl;
	}
	virtual void fun()
	{
		cout<<"Base is having fun."<<endl;
	}
	virtual void moreFun()
	{
		cout<<"Base is having more fun."<<endl;
	}
	virtual ~base()
	{
		cout<<"Base destroyed."<<endl;
	}
};

class derived: public base
{
	int *arr;
public:
	derived()
	{
		cout<<"derived created."<<endl;
		arr=new int[1000];
	}
	virtual void fun() override
	{
		cout<<"derived is having fun."<<endl;
	}
	~derived()
	{
		cout<<"derived destroyed."<<endl;
		if(arr)
		{
			delete []arr;
			arr=NULL;
		}
	}
};

class anotherDerived: public base
{ 
public:
	anotherDerived()
	{
		cout<<"another derived created."<<endl;
	}
	virtual void moreFun() override
	{
		cout<<"another derived is having more fun."<<endl;
	}
	~anotherDerived()
	{
		cout<<"another derived destroyed."<<endl;
	}
};

int main()
{
	//base *bPtr;  //no constructor and destructor called.
	//derived d;   //base, derived called and destroyed.
	//bPtr=&d;
	
	//derived d;
	//base &refB=d;
	
	base *bPtr=new derived;  //now only base, derived called.
	bPtr->fun();
	bPtr->moreFun();
	delete bPtr;             //only base destroyed not derived make virtual destructor.
	
	return 0;
}
