#include<iostream>
using namespace std;

int main()
{
	int x=0;
	int hour,min,sec;
	for(hour=0;hour<=23;hour++)
	{
		for(min=0;min<=59;min++)
		{
			for(sec=0;sec<=59;sec++)
			{
				cout<<hour<<":"<<min<<":"<<sec<<endl;
			}
		}
	}
	
	
	return 0;
}
