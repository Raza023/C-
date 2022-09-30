#include<iostream>

using namespace std;

class node
{
	int data;
public:
	node *prev;
	node *next;
	node()
	{
		data=0;
		prev=NULL;
		next=NULL;
	}
	node(int x)
	{
		data=x;
		prev=NULL;
		next=NULL;
	}
	void setX(int x)
	{
		data=x;
	}
	int getX()
	{
		return data;
	}
};

class DLList
{
	node *front;
	node *end;
public:
	DLList()
	{
		front=NULL;
		end=NULL;
	}
	void insertAtStart(int var)
	{
		node *temp=new node(var);
		if(front==NULL)
		{
			front=temp;
			end=temp;
		}
		else
		{
			temp->next=front;
			front->prev=temp;
			front=temp;
		}
	}
	void insertAtEnd(int var)     //append
	{
		node *temp=new node(var);
		if(end==NULL)
		{
			front=temp;
			end=temp;
		}
		else
		{
			end->next=temp;
			temp>prev=end;
			end=temp;
		}
	}
};

int main()
{
	
	return 0;
}
