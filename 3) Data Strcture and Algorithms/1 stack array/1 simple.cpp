#include<iostream>
#include<string>
#define SIZE 100
#include"stack.h"
#include"stack.cpp"

using namespace std;

/////////////////////simple/////////////////////////
int main()
{
	stack<int> st;
	int x;
	while(!st.isFull())
	{
		cout<<"Enter a value: ";
		cin>>x;
		st.push(x);
	}
	
	cout<<endl;
	cout<<"Top value: "<<st.Top()<<endl;
	cout<<endl;
	
	int i=0;
	while(!st.isEmpty())
	{
		//cout<<"Top value: "<<st.Top()<<endl;
		cout<<"value "<<i+1<<":"<<st.pop()<<endl;
		i++;
	}
	
	return 0;
}
