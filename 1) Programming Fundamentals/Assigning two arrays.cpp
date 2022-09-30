#include<iostream>
using namespace std;

int main()
{
	int arr1[4]={1,2,3,4}, arr2[4];
	//arr2[4]=arr1[4];         wrong statement
	for(int i=0;i<4;i++)      //array assignment.
	{
		arr2[i]=arr1[i];
	}
	
	for(int j=0;j<4;j++)      //new array display
	{
		cout<<arr2[j]<<endl;
	}
	return 0;
}
