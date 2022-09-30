//#include "stack.h"
#include<iostream>

using namespace std;

template <class T>
stack<T>::stack()
{
	top=-1;
}

template <class T>
void stack<T>::push(T x)
{
	data[++top]=x;
}

template <class T>
T stack<T>::pop()
{
	return data[top--];
}

template <class T>
T stack<T>::Top()
{
	return data[top];
}

template <class T>
int stack<T>::size()   //number of elements in stack.
{
	return top+1;
}

template <class T>
bool stack<T>::isFull()
{
	return (top>=SIZE-1);
}

template <class T>
bool stack<T>::isEmpty()
{
	return (top==-1||top<0);
}

template <class T>
bool stack<T>::MatchingParenthesis(char exp[])
{
	stack<T> s;
	for(int i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')
		{
			s.push(exp[i]);
		}
		else if(exp[i]==']'||exp[i]=='}'||exp[i]==')')
		{
			if(s.isEmpty()||s.Top()=='['&&exp[i]!=']'||s.Top()=='{'&&exp[i]!='}'||s.Top()=='('&&exp[i]!=')')
			{
				return false;
			}
			else
			{
				s.pop();
			}
		}
	}
	if(s.isEmpty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
bool stack<T>::isOperator(char ch)
{
	if (ch == '^' || ch == '/' || ch == '*' || ch == '+' || ch == '-')
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
bool stack<T>::isOperand(char ch)
{
	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
bool stack<T>::isNumericDigit(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
int stack<T>::precedence(char op)
{
	if (op == '^')
	{
		return 3;
	}
	else if (op == '*' || op == '/')
	{
		return 2;
	}
	else if (op == '+' || op == '-')
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

template <class T>
bool stack<T>::isLeftParenthesis(char ch)
{
	if (ch == '(')
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
bool stack<T>::isRightParenthesis(char ch)
{
	if (ch == ')')
	{
		return true;
	}
	else
	{
		return false;
	}
}
