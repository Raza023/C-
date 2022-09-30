#include<iostream>
#include<string>
#include "stack.h"
#include "stack.cpp"

using namespace std;

int main()
{
	stack<string> s1;
	string prefix;
	string infix;
	cout<<"Enter a prefix statement: ";
	cin>>prefix;
	int optCount=0;
	int oprCount=0;
	for (int i=prefix.length()-1;i>=0;i--)
	{
		if(s1.isOperand(prefix[i]))
		{
			oprCount++;
		}
		else if(s1.isOperator(prefix[i]))
		{
			optCount++;
		}
	}
	if(optCount==oprCount-1)
	{
		cout<<"PREfix: "<<prefix<<endl;
		for(int i=prefix.length()-1;i>=0;i--)   //because we want to examine prefix form right to left.
		{
			if(s1.isOperand(prefix[i]))
			{
				string st(1,prefix[i]);  //converting to string (making copy)
				s1.push(st);
			}
			else if(s1.isOperator(prefix[i]))
			{
				string st1=s1.pop();
				string st2=s1.pop();
				string result="("+st1+prefix[i]+st2+")";
				s1.push(result);
			}
		}
		cout<<"INfix: "<<s1.pop()<<endl;
	}
	else
	{
		cout<<"Prefix expression is incorrect."<<endl;
	}
	//sample:  
	//--+*adc^bc+d+ac   ((((a*d)+c)-(b^c))-(d+(a+c)))
	// ^-+ab-cd-ab      (((a+b)-(c-d))^(a-b))
	return 0;
}
