#include "queue.h"
#include<iostream>

using namespace std;

queue::queue()
{
    rear=front=-1;
}
bool queue::isFull()
{
    return (rear==SIZE-1);
}
bool queue::isEmpty()
{
    return (front==-1 || front>rear);
}
void queue::insert(Time x)
{
    if (rear==-1)
	{   // first item is being inserted
        front=rear=0;
        data[rear]=x;
    }
    else
	{
        if (isFull())
            cout<<"\nLast index filled in queue \n";
        else
            data[++rear]=x;
    }
}
Time queue::dequeue()
{
    if (!isEmpty())
	{
        return (data[front++]);
    }
    else
    {
        cout<<"Queue is empty ";
        return Time();
    }
}
