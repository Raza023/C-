#include<iostream>

using namespace std;

int main()
{
	int choice,radius,area,circumference,diam;
	const int PI =3.1457;
	do
	{
		cout<<endl;
		cout<<"Enter 1. to find Area of Circle."<<endl;
		cout<<"Enter 2. to find circumference of Circle."<<endl;
		cout<<"Enter 3. to find diameter of Circle."<<endl;
		cout<<"Enter 0. to terminate the program "<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		if (choice==1)
		{
			cout<<"Enter radius of circle: ";
			cin>>radius;
			area=PI*radius*radius;
			cout<<"Area of circle is "<<area<<"."<<endl;
		}
		else if (choice==2)
		{
			cout<<"Enter radius of circle: ";
			cin>>radius;
			circumference=2*PI*radius;
			cout<<"Circumference of circle is "<<circumference<<"."<<endl;
		}
		else if (choice==3)
		{
			cout<<"Enter radius of circle: ";
			cin>>radius;
			diam=2*radius;
			cout<<"Diameter of circle is "<<diam<<"."<<endl;
		}
		else if (choice==0)
		{
			cout<<"Bye bye!"<<endl;
		}
		else
		{
			cout<<"Invalid choice!"<<endl;
		}
	}while(choice!=0);
	return 0;
}
