#include<iostream>
#include<string>
#include<ctime>

using namespace std;

int main()
{
	time_t now=time(0);
	string dt1=ctime(&now);
	cout<<"Time 1: "<<dt1<<endl;
	string dt2=ctime(&now);
	cout<<"Time 2: "<<dt2<<endl;
	string dt;
	dt=dt1+dt2;
	cout<<"Sum time: "<<dt<<endl;
}
