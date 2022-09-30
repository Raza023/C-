#include<iostream>
#include<string>
#include<string.h>
#define SIZE 100
#include"stack.h"
#include"stack.cpp"

using namespace std;

/////////////////////Char array (palindrome)//////////////////////////
int main()
{
	stack<char> st;
	
	char exp[SIZE]="madam";
	//char exp[SIZE]="Pakistan";
	cout<<"Expression: "<<exp<<endl;
	
	char out[SIZE];
	
	for(int i=0;exp[i]!='\0';i++)
	{
		st.push(exp[i]);
	}
	
	int i=0;
	while(!st.isEmpty())
	{
		out[i]=st.pop();
		i++;
	}
	out[i]='\0';
	cout<<"Reverse: "<<out<<endl;
	
	if(!strcmp(exp,out))               //#include<string.h> for strcmp(a,b)-->if(a==b) returns 0;
	{
		cout<<"It is a Palindrome."<<endl;
	}
	else
	{
		cout<<"It is not a Palindrome."<<endl;
	}
	
	return 0;
}
