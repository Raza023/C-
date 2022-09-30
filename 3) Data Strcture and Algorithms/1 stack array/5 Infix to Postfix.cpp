#include<iostream>
#include<string>
#include"stack.h"
#include"stack.cpp"
#define SIZE 100

using namespace std;

int main()
{
	stack<char> s;
	char infix[SIZE];
	char postfix[SIZE];

	cout << "Enter any expression: ";
	cin >> infix;
	cout << infix << endl;
	
	for(int i=0;infix[i] != '\0';i++)
	{
		if(infix[i]=='[')
		{
			infix[i]='(';
		}
		else if(infix[i]=='{')
		{
			infix[i]='(';
		}
		else if(infix[i]==']')
		{
			infix[i]=')';
		}
		else if(infix[i]=='}')
		{
			infix[i]=')';
		}
	}
	
	int j = 0;
	for (int i = 0; infix[i] != '\0'; i++)
	{
		if (s.isOperand(infix[i]))
		{
			postfix[j] = infix[i];
			j++;
		}
		else if (s.isOperator(infix[i]))
		{
			if (s.Top() == '(')
			{
				s.push(infix[i]);
			}
			else if (s.isEmpty())
			{
				s.push(infix[i]);
			}
			else if (s.precedence(infix[i]) > s.precedence(s.Top()))
			{
				s.push(infix[i]);
			}
			else if(s.precedence(infix[i]) <= s.precedence(s.Top()))
			{
				while (!s.isEmpty()&& s.Top()!='(' && s.precedence(infix[i]) <= s.precedence(s.Top()))
				{
					postfix[j] = s.pop();
					j++;
				}
				s.push(infix[i]);
			}
		}
		else if (s.isLeftParenthesis(infix[i]))
		{
			s.push(infix[i]);
		}
		else if (s.isRightParenthesis(infix[i]))
		{
			while (!s.isEmpty()&&!(s.isLeftParenthesis(s.Top())))
			{
				postfix[j] = s.pop();
				j++;
			}
			s.pop();  //poping left as well.
		}
	}
	while(s.Top()!='\0')
	{
		if (s.Top() == '(')
		{
			s.pop(); //infix is not correct.
		}
		else
		{
			postfix[j] = s.pop();
			j++;
		}
	}

	postfix[j] = '\0';
	cout << "Postfix: " << postfix << endl;
	
	return 0;
}
