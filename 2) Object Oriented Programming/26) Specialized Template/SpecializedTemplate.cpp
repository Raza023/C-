#include<iostream>
#include<string>

using namespace std;

template <class T>
T sum(T a,T b)
{
	cout<<"Generic  template"<<endl;
	return a+b;
}

//in bool 1+1=1 not 2. so we don't want above func.
//so, we make specialized template

template <>    //khali chorna  first come to specialized template
bool sum(bool a,bool b)
{
	cout<<"Specialized  template"<<endl;
	if(a==true&&b==true||a==false&&b==false)
	{
		return false;
	}
	else
	{
		return true;
	}
}

template <class T>
class AnyThing
{
	T anyVar;
	T someVar;
public:
	AnyThing(T a,T b)
	{
		cout<<"AnyThing is created!"<<endl;
		anyVar=a;
		someVar=b;
	}
	AnyThing()
	{
		cout<<"AnyThing is created!"<<endl;
	}
	T getAnyThing()
	{
		return anyVar+someVar;
	}
	T getProduct()
	{
		return anyVar*someVar;
	}
};

template <>
class AnyThing<char>        //class AnyThing<MyArray<int>>
{
	char anyOfVar; //can change data members
	char someVar;
public:
	AnyThing(char a,char b)
	{
		cout<<"Specialized AnyThing is created!"<<endl;
		anyOfVar=a;
		someVar=b;
	}
	AnyThing()
	{
		cout<<"Specilized AnyThing is created!"<<endl;
	}
	char getAnyThing()
	{
		return anyOfVar;
	}
	char getProduct()
	{
		return someVar;
	}
};



int main()
{
	system("Color F0");
	cout<<"10+30="<<sum(10,30)<<endl;
	cout<<"0+0="<<sum(false,false)<<endl; //0+0=0
	cout<<"0+1="<<sum(false,true)<<endl;  //0+1=1
	cout<<"1+0="<<sum(true,false)<<endl;  //1+0=1
	cout<<"1+1="<<sum(true,true)<<endl;   //1+1=0 and carry 1 (giving 1 so wrong we need specialized template)
	
	//AnyThing<int> any(10,30);
	//AnyThing<string> any("abc","def");   //* not run
	AnyThing<char> any('a','b');           //perform on ascii
	
	cout<<"Sum: "<<any.getAnyThing()<<endl;
	cout<<"Product: "<<any.getProduct()<<endl;
	
	return 0;
}
