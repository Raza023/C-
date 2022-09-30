#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
#include"node.h"
//#include"node.cpp"
#include"SLlist.h"
//#include"SLlist.cpp"

using namespace std;

int main()
{
	int val;     
	SLlist<int> l1;              //normal list.
	
	l1.sortedInsert(3);
	l1.sortedInsert(14);
	l1.sortedInsert(7);
	l1.sortedInsert(10);          //sorted insertion using function.
	l1.sortedInsert(4);
	l1.sortedInsert(12);
	l1.sortedInsert(5);
	l1.sortedInsert(13);
	l1.sortedInsert(1);
	l1.sortedInsert(16);
	l1.sortedInsert(6);
	l1.sortedInsert(2);
	l1.sortedInsert(9);
	l1.sortedInsert(15);
	l1.sortedInsert(8);
	l1.sortedInsert(11);
	
	cout<<"Normal list: "<<endl;
	l1.traverse();
	
	cout<<endl<<endl;
	
	SLlist<int> l2;             //express list  
	
	srand(time(0));
	
	int random;
	for(int i=1;i<=l1.getNodeCount();i++)  //getting values from normal list in Express list using sorted insertion.
	{
		if(i==1)
		{
			random=1;
		}
		else if(i==l1.getNodeCount())
		{
			random=1;
		}
		else
		{
			random=rand()%2;
		}
		if(random==1)
		{
			l2.sortedInsert(l1.getValueAt(i));
		}
	}
	
	cout<<"Express list: "<<endl;
	l2.traverse();
	
	cout<<endl<<endl;
	
	cout<<"Enter a value you want to search using skip list: ";
	cin>>val;
	
	if(l1.CheckValueInList(val))
	{
		int count=0;
		int need;
		for(int i=1;i<=l2.getNodeCount();i++)
		{
			if(val>=l2.getValueAt(i))
			{
				need=l2.getValueAt(i);
				count++;
			}
		}
		//cout<<count<<endl;   //for time complexity.
		//cout<<need<<endl;
		int pos=l1.SkipWhen(need);
		//cout<<pos<<endl;
		cout<<endl<<"All values before "<<need<<" are skiped."<<endl;
		cout<<endl<<"Skip list after skipping values to the value to be searched: "<<endl;
		int result=l1.TraverseFromTo(pos,val);
		cout<<endl<<"Value we are searching using skip list: "<<result<<endl;
		cout<<endl<<"Time complexity is O(sqrt(n)): "<<count<<endl;             //or it's O(log(n)).
	}
	else
	{
		cout<<endl<<"Value not found in normal linked list."<<endl;
	}
	
	return 0;
}
