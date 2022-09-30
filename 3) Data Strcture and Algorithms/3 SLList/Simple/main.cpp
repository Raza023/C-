#include<iostream>
#include<string>
#include "node.h"
#include "node.cpp"
#include "SLList.h"
#include "SLList.cpp"

using namespace std;

int main()
{
	SLList<int> li;
	li.append(50);
	li.append(40);
	li.append(30);
	li.append(20);
	li.append(10);
	li.append(10);
	
	li.show();
	cout<<"------------------"<<endl;
	
	li.insertDes(10);
	
	li.show();
	cout<<"------------------"<<endl;
	
	li.deleteFirst(50);
	
	li.show();
	cout<<"------------------"<<endl;
	
	li.deleteLast(10);
	
	li.show();
	cout<<"------------------"<<endl;
	
	li.deleteAll(10);
	
	li.show();
	cout<<"------------------"<<endl;
	
	cout<<"====================================================================================="<<endl;
	
	SLList<int> li2;
	li2.append(50);
	li2.append(40);
	li2.append(30);
	li2.append(21);
	li2.append(10);
	li2.append(5);
	
	li2.show();
	cout<<"------------------"<<endl;
	
	cout<<"Middle of the list: "<<li2.middle()<<endl;
	cout<<"Median: "<<li2.median()<<endl;
	
	return 0;
}
