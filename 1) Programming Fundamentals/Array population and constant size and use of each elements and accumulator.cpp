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

	for(int x=0;x<SIZE;x++)
	{
		cin>>day[x];
	}
	
	cout<<"Total pocket money is: ";
	int average, sum=0;              //sum=21
	for(int i=0;i<SIZE;i++)
	{
		sum=sum+day[i];
	}
	cout<<sum<<endl;
	average=sum/7;
	cout<<"Average = "<<average<<endl;
	return 0;
}
