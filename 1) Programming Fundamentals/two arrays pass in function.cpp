#include<iostream>
using namespace std;

bool isEqual(int [] , int , int [] , int);


int main()
{
	const int SIZE1=4,SIZE2=4;
	int arr1[SIZE1]={1,2,3,4};
	int arr2[SIZE2]={1,2,3,4};
	bool flag=isEqual(arr1,SIZE1,arr2,SIZE2);
	if (flag)
	{
		cout<<"Arrays are equal. "<<endl;
	}
	else
	{
		cout<<"Arrays are not equal. "<<endl;
	}
	return 0;
}

bool isEqual(int ar1[] , int s1 , int ar2[] , int s2)
{
	bool flag=true;
	if(s1==s2)
	{
		for(int i=0;i<s1;i++)
		{
			if(ar1[i]!=ar2[i])
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}		
}
