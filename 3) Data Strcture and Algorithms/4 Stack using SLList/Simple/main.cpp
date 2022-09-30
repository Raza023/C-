#include<iostream>
#include<string>
#include"node.h"
#include"node.cpp"
#include"stack.h"
#include"stack.cpp"


using namespace std;

int main()
{
	stack<char> s1;
	cout<<"For char:"<<endl;
	char x;
	int i=0; 
	while(i<6)
	{
		cout<<"Enter a value: ";
		cin>>x;
		s1.push(x);
		i++;
	}
	
	cout<<endl;
	
	cout<<"Top value: "<<s1.topValue()<<endl;
	cout<<"Top value: "<<s1.topValue()<<endl;
	
	cout<<endl;
	
	cout<<"Stack: "<<endl;
	while(!s1.empty())
	{
		cout<<s1.pop()<<endl;
	}
	
	return 0;
}
