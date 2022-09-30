#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
using namespace std; 

//static life is global but scope is local

class Income
{
	int salary;
	static int collectiveIncome;
public:
	void setSalary(int sal)
	{
		salary=sal;
		collectiveIncome += sal;
	}
	
	int getSalary()
	{
		return salary;
	}
	
	int getCollectiveIncome()
	{
		return collectiveIncome;
	}
};

int Income::collectiveIncome=0;

int main()
{
	Income fatherIncome;  //compiler called its own constructor
	Income motherIncome;
	Income guardianIncome;
	
	fatherIncome.setSalary(75000);
	motherIncome.setSalary(60000);
	guardianIncome.setSalary(40000);
	
	cout<<"Total income: "<<fatherIncome.getCollectiveIncome()<<endl;
	cout<<"Father income: "<<fatherIncome.getSalary()<<endl;
	cout<<"Mother income: "<<motherIncome.getSalary()<<endl;
	cout<<"Guardian income: "<<guardianIncome.getSalary()<<endl;
}
