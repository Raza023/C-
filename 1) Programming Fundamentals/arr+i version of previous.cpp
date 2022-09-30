#include<iostream>
using namespace std;


int main()
{
	int arr[]={1,2,3,4,5};
	int *ptr;
	ptr=arr;
	for(int i=0;i<5;i++)
	{
		cout<<arr+i<<"\t";                     
		cout<<*(arr+i)<<endl;              //arr[i]=*(arr+i)
		//cout<<arr[i]<<endl;
	}	
	return 0;
}

