#include<iostream>

using namespace std;

int main()
{
	int rows, cols;
	cout<<"Enter rows: ";
	cin>>rows;
	cout<<"Enter colums: ";
	cin>>cols;
	
	int **p=new int*[rows];
	
	for(int i=0;i<rows;i++)
	{
		p[i]=new int[cols];
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			p[i][j]=i+j;
		}
	}
	
	for(int i=0;i<rows;i++)
	{
		for(int  j=0;j<cols;j++)
		{
			cout<<p[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	for(int i=0;i<rows;i++)
	{
		delete [] p[i];
	}
	
	delete [] p;
	
	return 0;
} 
