#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	while(true)
	{
		cout<<"Lopping....."<<endl;
		if(kbhit())
		{
			cout<<"You entered a key!"<<endl;
			break;
		}
	}
	return 0;
}
