#include<iostream>
#include<string>
#include<string.h>
#include"stack.h"
#include"stack.cpp"
#define SIZE 100

using namespace std;

int main()
{
	stack<char> s1;
	char exp[SIZE];                           //"This is a test string";
	string str;
	cout<<"Enter a line: ";
	getline(cin,str);
	int count=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='.')
		{
			exp[i]=' ';
			count++;
		}
		else if(str[i]!='.')
		{
			exp[i]=str[i];
			count++;
		}
	}
	exp[count]='\0';
	cout<<"Input: "<<exp<<endl;
	cout<<"Output: ";
	char out[SIZE];
	for(int i=0;exp[i]!='\0';i++)
	{
		if(exp[i]==' ')
		{
			int k=0;
			while(!s1.isEmpty())
			{
				out[k]=s1.pop();
				k++;
			}
			out[k]='\0';
			cout<<out<<" ";
		}
		else
		{
			s1.push(exp[i]);
		}	
	}
	int k=0;
	while(!s1.isEmpty())
	{
		out[k]=s1.pop();
		k++;
	}
	out[k]='\0';
	cout<<out<<" ";
	//sample:
	// input: This is a test string.
	// output: sihT si a tset gnirts
	// input: Pakistan is a safest country in the world.
	// output: natsikaP si a tsefas yrtnuoc ni eht dlrow
	return 0;
}
