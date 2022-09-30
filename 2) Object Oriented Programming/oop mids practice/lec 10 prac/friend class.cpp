#include <iostream>
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
	
	static int getCollectiveIncome()
	{
		return collectiveIncome;
	}
	
	friend void func(Income &inc,int tax);
	friend class Budget;
};

class Budget
{
	int budget;
	int expenses;
public:
	Budget(int b,int e)
	{
		budget=b;
		expenses=e;
	}
	int calculateSavings(Income &inc)
	{
		int savings=inc.salary-expenses;
		return savings;
	}
};

void func(Income &inc,int tax)
{
	inc.salary=inc.salary-tax;
	inc.collectiveIncome=inc.collectiveIncome-tax;
}

int Income::collectiveIncome=0;

int main()
{
	Income fatherIncome;  //compiler called its own constructor
	Income motherIncome;
	Income guardianIncome;
	
	fatherIncome.setSalary(75000);
	motherIncome.setSalary(60000);
	guardianIncome.setSalary(50000);
	
	func(fatherIncome,2500);
	func(motherIncome,2000);
	func(guardianIncome,1700);
	
	cout<<"Total income: "<<fatherIncome.getCollectiveIncome()<<endl;
	cout<<"Father income: "<<fatherIncome.getSalary()<<endl;
	cout<<"Mother income: "<<motherIncome.getSalary()<<endl;
	cout<<"Guardian income: "<<guardianIncome.getSalary()<<endl;
	int sal=Income::getCollectiveIncome();
	cout<<"Total income: "<<sal<<endl;
	
	Budget b(sal,40000);
	
	cout<<"Father savings: "<<b.calculateSavings(fatherIncome)<<endl;
	cout<<"Mother savings: "<<b.calculateSavings(motherIncome)<<endl;
	cout<<"Guardian savings: "<<b.calculateSavings(guardianIncome)<<endl;
	return 0;
}
