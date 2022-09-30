#include<iostream>

using namespace std;

int main()
{
	char choice;
	
	do
	{
		int num,fact,ans=1;
		cout<<"Enter a number :";
		cin>>num;
		fact=num;
		while(fact>=1)
		{
			ans=ans*fact;
			fact--;
		}
		cout<<"Factorial of "<<num<<" is "<<ans<<"."<<endl;
		cout<<"Enter your choice:(Y/N) ";
		cin>>choice;
	}while(choice=='y'||choice=='y');
	return 0;
}
