#include<iostream>

using namespace std;

int main()
{
	const int SIZE=6;
	int *arrptr=new int[SIZE];
	
	for(int i=0;i<SIZE;i++)
	{
		arrptr[i]=i+1;
	}
	
	for(int i=0;i<SIZE;i++)
	{
		cout<<"arrptr "<<i+1<<" stores:"<<arrptr[i]<<endl;
	}
	
	delete []arrptr;
	
	return 0;
}
