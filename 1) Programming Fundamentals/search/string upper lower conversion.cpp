#include<iostream>
#include<string>

using namespace std;

string convertSmall(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]+=32;
		}
	}
	return str;
}

string convertLarge(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]-=32;
		}
	}
	return str;
}

int main()
{
	string st="aBc";
	
	cout<<st<<endl;
	
	st=convertSmall(st);
	
	cout<<st<<endl;
	
	st=convertLarge(st);
	
	cout<<st<<endl;
	
	char A=65;
	cout<<"A: "<<A<<endl;
	
	char a=97;
	cout<<"a: "<<a<<endl;
	
	return 0;
}
