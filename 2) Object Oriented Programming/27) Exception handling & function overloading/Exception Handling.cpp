#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include<cmath>

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

template <class T>
void printArray(T * arr, int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<", ";
	}
	cout<<endl;
}

template <class T>
void printArray(T * arr, int size,int sIdx,int eIdx)
{
	for(int i=sIdx;i<eIdx;i++)
	{
		cout<<arr[i]<<", ";
	}
	cout<<endl;
}


//int var=a+divide(25+a,40);

//Exception handling
//1)throw   (e.g., umpire point out)
//2)try     (observe)
//3)catch   (response,penalty)

double divide(double num,double den)
{
	if(den==0)
	{
		string errorMessage="Error! Denominator can't be zero.";
		throw errorMessage;   //throw -1;(-1 is an indicator)
	}
	else
	{
		return num/den;
	}
}

int main()
{
	double a,b;
	cout<<"Enter a value: ";
	cin>>a;
	cout<<"Enter another value: ";
	cin>>b;
	
	try          //like if else means catch must has try
	{
		double result;
		result=divide(a,b);
		cout<<a<<"/"<<b<<"="<<result<<endl;
		if(a<0)
		{
			string errorMessage="Error! number can't be less than zero.";
			throw errorMessage;
		}
		result=sqrt(a);
		double cgpa;
		if(cgpa<3.3)
		{
			int notIllegible=-1;
			throw notIllegible;
		}
		cout<<"You are a TA now."<<endl;
	}
	catch(string error)
	{
		cout<<error<<endl;
	}
	catch(int)
	{
		cout<<"You can't be a TA.'"<<endl;
	}
	return 0;
}
