#include<iostream>
#include<string>
using namespace std;

struct date
{
	int day;
	int mon;
	int year;
};

date getdate(date d)     //abd as a return type.
{
	d.day=12;
	d.mon=12;
	d.year=2000;
	return d;
}

int main()
{	
	date birthday={0};                   //or date birthday=getdate(birthday);            int a=0;      {0,0,0} 
	birthday=getdate(birthday);          //a=getvalue(a);
	cout<<birthday.day<<"/"<<birthday.mon<<"/"<<birthday.year<<endl;
	return 0;
}
