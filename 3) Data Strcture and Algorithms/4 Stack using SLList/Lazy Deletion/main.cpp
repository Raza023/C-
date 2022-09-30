#include<iostream>
#include<string>
#include"node.h"
//#include"node.cpp"
#include"SLlist.h"
//#include"SLlist.cpp"

using namespace std;

int main()
{
	SLlist<int> li;
	li.append(10);
	li.append(20);
	li.append(30);
	li.append(40);
	li.append(50);
	
	li.traverse();
	
	cout<<"------------------"<<endl;
	
	li.lazyDelte(20);  //check true but not delted.
	
	li.traverse();  //deleting in here.
	
	cout<<"------------------"<<endl;

	li.lazyDelte(30);  //check true but not deleted.
	
	li.traverse();  //deleting in here.
	
	cout<<"------------------"<<endl;
	
	return 0;
}
