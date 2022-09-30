#include<iostream>
using namespace std;

int main()
{
	int i=1;                                        //Infinite loops
	while(i==5)                                     //don't use assinment operator   
	{                                               //don't miss braces.     
		cout<<i<<endl;                            
		i++;                                        //dont miss updationn;
	}
	return 0;
}
