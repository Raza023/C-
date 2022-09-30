#include "SLList.h"
#include<iostream>

using namespace std;

template <class T>
SLList<T>::SLList() 
{
    first=NULL;
}

template <class T>
void SLList<T>::append(int value)
{
    if (first==NULL)
    {
    	first = new node<T>(value);
	}
    else
    {
        node<T> *temp;
        temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new node<T>(value);
    }
}

template <class T>
void SLList<T>::insertDes(int val)
{
	node<T> *temp=new node<T>(val);
	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		node<T> *prev;
		node<T> *cur;
		cur=first;
		prev=first;
		if(val>first->getX())
		{
			temp->next=first;
			first=temp;
		}
		while(cur!=NULL&&cur->getX()>=val)
		{
			prev=cur;
			cur=cur->next;
		}
		temp->next=cur;
		prev->next=temp;
	}
}

template <class T>
void SLList<T>::deleteFirst(int val)
{
	node<T> *temp=first;
	if(first->getX()==val)
	{
		first=first->next;
		delete temp;
	}
	else
	{
		node<T> *prev;
		node<T> *cur;
		prev=NULL;
		cur=first;
		while(cur!=NULL&&cur->getX()!=val)
		{
			prev=cur;
			cur=cur->next;
		}
		if(cur==NULL)
		{
			cout<<val<<" Not found."<<endl;
		}
		else
		{
			prev->next=cur->next;
			delete cur;
		}
	}
}

template <class T>
void SLList<T>::deleteLast(int val)
{
	node<T> *curr, *prev, *fdPrev, *fd;
    prev = NULL;
    curr = first;
	bool flag=false;
    while(curr!=NULL)
	{
        if (curr->getX() == val)
		{
            flag = true;
            fdPrev = prev;
            fd = curr;
        }
        prev = curr;
        curr=curr->next;
    }
    if(!flag)
    {
    	cout<<"Not found\n";
	}   
    else
	{
        fdPrev->next = fd->next;
        delete fd;
    }
}

template <class T>
void SLList<T>::deleteAll(int val) // delete all occurrences of val
{ 
    node<T> *prev, *curr;
    prev=NULL;
    curr=first;
    while (first->getX() == val)
	{
        first=first->next;
        delete curr;
        curr=first;
    }

    node<T> *temp;
    while (curr!=NULL)
	{
        if (curr->getX() == val)
		{
            temp=curr;
            prev->next=curr->next;
            curr=curr->next;
            delete temp;
        }
        else
		{
            prev=curr;
            curr=curr->next;
        }
    }
}

template <class T>
int SLList<T>::middle()  //middle of linked list
{
	node<T> *fast;
	node<T> *slow;
	fast=first;
	slow=first;
	while(fast!=NULL&&fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow->getX();
}

template <class T>
double SLList<T>::median()
{
	node<T> *fast;
	node<T> *slow;
	fast=first;
	slow=first;
	int count=0;
	while(fast!=NULL) //counting linked list
	{
		fast=fast->next;
		count++;
	}
	if(count%2!=0)
	{
		double val=middle();
		return val;
	}
	else
	{
		int index=count/2;
		for(int i=0;i<index-1;i++)
		{
			slow=slow->next;
		}
		return (slow->getX()+slow->next->getX())/2.0;
	}
}

template <class T>
void SLList<T>::show() // traverse
{
    node<T> *temp;
    temp=first;
    while (temp!=NULL)
    {
        cout << temp->getX()<<endl;
        temp = temp->next;
    }
}

template <class T>
SLList<T>::~SLList()
{
	node<T> *temp;
	while(first!=NULL)
	{
		temp=first;
		first=first->next;
		delete temp;
	}
	first=NULL;
}
