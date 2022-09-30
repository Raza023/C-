#include<iostream>
#include<string>
#include<string.h>
#define SIZE 100
#include"stack.h"
#include"stack.cpp"

using namespace std;

////////////////////// Matching Parenthesis //////////////////////////
int main()
{
	stack<char> st;
	
	char exp[SIZE]="[{()()}]";//"[c+{g-(v-h}+b]+v)";
	
	cout<<"Expression: "<<exp<<endl;
	
	if(st.MatchingParenthesis(exp))
	{
		cout<<"Parenthesis matching."<<endl;
	}
	else
	{
		cout<<"Parenthesis not matching."<<endl;
	}
	
	return 0;
}
