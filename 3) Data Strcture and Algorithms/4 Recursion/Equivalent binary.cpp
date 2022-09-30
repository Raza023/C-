#include<iostream>
#include<string>

using namespace std;

int equivalentBinary(int var)
{
	if(var==0)
	{
		return 0;
	}
	else
	{
		return (var%2+10*equivalentBinary(var/2));
	}
}
/* test
bin(4)=(0+10*bin(2))
bin(2)=(0+10*bin(1))
bin(1)=(1+10*bin(0))
bin(0)=0
recursion:
bin(1)=(1+10*0)=1+0=1
bin(2)=(10*1)=10
bin(4)=(10*10)=100
*/
int main()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	while(x<0)
	{
		cout<<"Please enter a non-negative number: ";
		cin>>x;
	}
	cout<<"Equivalent Binary: "<<equivalentBinary(x)<<endl;
	return 0;
}
