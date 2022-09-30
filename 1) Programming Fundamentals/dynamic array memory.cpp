#include<iostream>
using namespace std;


int main()
{
	int stu;
	cout<<"Enter number of students: ";
	cin>>stu;
	int * arr=new int[stu];        //int arr[stu];
	for(int i=0;i<stu;i++)
	{
		arr[i]=i+1;
	}
	for(int i=0;i<stu;i++)
	{
		cout<<arr[i]<<endl;
	}
	delete []arr;	
	return 0;
}

