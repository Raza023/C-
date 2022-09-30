#include<iostream>
#include<string>
#include<cmath>
#include"stack.h"
#include"stack.cpp"
#define SIZE 100

using namespace std;

int main()
{
	stack<int> s;
	char postfix[SIZE];
	cout << "Enter any postfix expression: ";
	cin >> postfix;
	int optCount=0;
	int oprCount=0;
	
	for (int i = 0; postfix[i] != '\0'; i++)
	{
		if(s.isNumericDigit(postfix[i]))
		{
			oprCount++;
		}
		else if(s.isOperator(postfix[i]))
		{
			optCount++;
		}
	}
	
	if(optCount==oprCount-1)
	{
		cout << "Postfix: " << postfix << endl;
		for (int i = 0; postfix[i] != '\0'; i++)
		{
			if(s.isNumericDigit(postfix[i]))
			{
				s.push(postfix[i]-48);
			}
			else if(s.isOperator(postfix[i]))
			{
				int first;
				int second;
				if(postfix[i]=='-')
				{
					first=s.pop();
					second=s.pop();
					int result=second-first;
					s.push(result);
				}
				else if(postfix[i]=='+')
				{
					first=s.pop();
					second=s.pop();
					int result=second+first;
					s.push(result);
				}
				else if(postfix[i]=='*')
				{
					first=s.pop();
					second=s.pop();
					int result=second*first;
					s.push(result);
				}
				else if(postfix[i]=='/')
				{
					first=s.pop();
					second=s.pop();
					int result=second/first;
					s.push(result);
				}
				else if(postfix[i]=='^')
				{
					first=s.pop();
					second=s.pop();
					int result=pow(second,first);
					s.push(result);
				}
			}
		}
		cout<<"Evaluation: "<<s.pop()<<endl;
	}
	else
	{
		cout<<"Postfix expression is incorrect."<<endl;
	}
	//sample:
	//     92+42-*2/
	//     45+62-*
	return 0;
}
