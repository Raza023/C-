#include<iostream>
using namespace std;

int main()
{
	bool flag=true;
	const int SIZE1=4,SIZE2=4;
	int arr1[SIZE1]={1,2,3,4};
	int arr2[SIZE2]={1,2,3,4};
	if(SIZE1==SIZE2)
	{
		for(int i=0;i<SIZE1;i++)
		{
			if(arr1[i]!=arr2[i])
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			cout<<"Equal"<<endl;
		}
		else
		{
			cout<<"NOT equal!"<<endl;
		}
	}
	else
	{
		cout<<"NOT equal!"<<endl;
	}
	
	return 0;
}
