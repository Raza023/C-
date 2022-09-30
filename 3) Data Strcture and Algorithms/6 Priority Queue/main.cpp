#include<iostream>
#include<string>
#include"priorityQueue.h"
#include"priorityQueue.cpp"
#define SIZE 10

using namespace std;

int main()
{
	priorityQueue<int> q1;
	
	q1.insert(79,5);
	q1.insert(60,3);
	q1.insert(5,7);
	q1.insert(100,1);
	q1.insert(29,4);
	q1.insert(23,6);
	q1.insert(78,3);
	q1.insert(45,1);
	
	cout<<endl<<"Priority Queue: "<<endl;
	q1.show();
	
	int t=q1.dequeue();
	if(t!=-999)
	{
		cout<<t<<" is dequeued."<<endl;
	}
	t=q1.dequeue();
	if(t!=-999)
	{
		cout<<t<<" is dequeued."<<endl;
	}
	t=q1.dequeue();
	if(t!=-999)
	{
		cout<<t<<" is dequeued."<<endl;
	}
	t=q1.dequeue();
	if(t!=-999)
	{
		cout<<t<<" is dequeued."<<endl;
	}
	t=q1.dequeue();
	if(t!=-999)
	{
		cout<<t<<" is dequeued."<<endl;
	}
	t=q1.dequeue();
	if(t!=-999)
	{
		cout<<t<<" is dequeued."<<endl;
	}
	
	cout<<endl;
	
	cout<<"Priority Queue: "<<endl;
	q1.show();
    
    return 0;
}
