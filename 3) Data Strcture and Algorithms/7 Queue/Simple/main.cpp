#include<iostream>
#include<string>
#include"queue.h"
#include"queue.cpp"
#define SIZE 5

using namespace std;

int main()
{
	queue<int> q1;
	
	q1.insert(1);
	q1.insert(2);
	q1.insert(3);
	q1.insert(4);
	q1.insert(5);
	cout<<"Queue: ";
	q1.show();
	cout<<"Deleted: "<<q1.dequeue()<<endl;   //first deleted.
	q1.insert(6);                            //5th added
	q1.insert(7);                            //not entered because 5th entry was already entered.
	cout<<"Queue: ";
	q1.show();
    
    return 0;
}
