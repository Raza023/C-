#include<iostream>
#include<string>

using namespace std;

/*
Abstract class
with pure virtual func.
can't make object of it becuase of pure virtual func like Base b;.
Rules:
	1) must be virtual for =0;
	2) must write definetion without =0;
	3) can't make object of it becuase of pure virtual func.
	4) But can make pointer and reference variable
	   like Base *b;    jis ka lia constructor call nahi hota
	   derived d;
	   Base &refB=d;
	5) derived must implement pure virtual func otherwise that derived will be abstract
*/

class base //class is now abstract class
{
public:
	base()
	{
		cout<<"Base created."<<endl;
	}
	virtual void fun()=0; //pure virtual functions don't exist in base but implemented in derived.
	
	/*virtual void fun()
	{
		cout<<"Base is having fun."<<endl;
	}
	*/
	virtual void moreFun()
	{
		cout<<"Base is having more fun."<<endl;
	}
	virtual~base()
	{
		cout<<"Base destroyed."<<endl;
	}
};

class derived: public base  //class is concarete class becuase of implementation
{
	int *arr;
public:
	derived()
	{
		cout<<"derived created."<<endl;
		arr=new int[1000]; 
	}
	virtual void fun()
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
	virtual void moreFun()
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
	
	//base refB;
	//derived d=&refB;
	
	base *bPtr=new derived;  //now only base, derived called.
	bPtr->fun();
	bPtr->moreFun();
	delete bPtr;             //only base destroyed not derived make virtual destructor.
	
	return 0;
}
