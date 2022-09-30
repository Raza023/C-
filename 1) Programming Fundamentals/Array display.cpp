#include<iostream>
using namespace std;

int main()
{
	const int SIZE=7;
	int day[SIZE];
	cout<<"Enter your pocket money: "<<endl;
	/*cin>>day[0];
	cin>>day[1];
	cin>>day[2];
	cin>>day[3];
	cin>>day[4];
	cin>>day[5];
	cin>>day[6];*/

	for(int x=0;x<SIZE;x++)               //Array populate
	{
		cin>>day[x];
	}
	
	cout<<"Here is your pocket money: "<<endl;
	
	cout<<day[0]<<endl;
	cout<<day[1]<<endl;
	cout<<day[2]<<endl;
	cout<<day[3]<<endl;
	cout<<day[4]<<endl;
	cout<<day[5]<<endl;
	cout<<day[6]<<endl;
	
	/*for(int x=0;x<SIZE;x++)                 //Array display  
	{
		cout<<day[x]<<endl;
	}*/
	return 0;
}
