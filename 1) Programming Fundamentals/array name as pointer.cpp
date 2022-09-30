#include<iostream>
using namespace std;


int main()
{
	int arr[]={1,2,3,4,5};
	cout<<"First value of array is "<<*arr<<endl;
	cout<<"First element address of array is "<<arr<<endl;   
	cout<<"First element address of array is "<<&arr[0]<<endl;
	cout<<"Second element address of array is "<<&arr[1]<<endl;          //arr=&arr[0];
	return 0;
}

