#include<iostream>

using namespace std;

int main()
{
	int rows,cols;
	cout<<"Rows: ";
	cin>>rows;
	cout<<"Cols: ";
	cin>>cols;
	
	int **arr=new int*[rows];
	
	for(int i=0;i<rows;i++)
	{
		arr[i]=new int[cols];
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<"Enter ["<<i+1<<"]"<<"["<<j+1<<"]: ";
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<rows;i++)
	{
		delete []arr[i];
	}
	
	delete []arr;
	
	
	
	return 0;
}
