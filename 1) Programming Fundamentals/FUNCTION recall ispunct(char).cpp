#include<iostream>
using namespace std;

int main()
{
	char ch;
	char choice;
	
	int i=1;
	while(i!=0)
	{
		cin>>ch;
		if(ispunct(ch))
		{
			cout<<"It is a punctuation."<<endl;
		}
		else
		{
			cout<<"It is not a punctuation."<<endl;
		}
		cout<<"Do you want to display again(y/n):";
		cin>>choice;
		if(choice=='Y'||choice=='y')
		{
			i=1;
		}
		else if(choice=='n'||choice=='N')
		{
			i=0;
		}
		else
		{
			do
			{
			cout<<"Invalid choice.\n";
			cout<<"Do you want to display again(y/n):";
			cin>>choice;
			}while(choice!='Y'||choice!='y'&&choice=='n'||choice=='N');
		}
	}
	
	return 0;
}
