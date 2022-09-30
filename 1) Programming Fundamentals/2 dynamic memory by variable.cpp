 #include<iostream>
using namespace std;


int main()
{
	//int x;
	int *ptr=new int;
	cout<<"Enter numbers: ";
	cin>>*ptr;
	delete ptr;
	return 0;
}

