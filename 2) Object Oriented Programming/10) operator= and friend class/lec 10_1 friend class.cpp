#include <iostream>
using namespace std; 

//static life is global but scope is local

class Income
{
	int salary;
	static int collectiveIncome;
public:
	Income()
	{
		salary=0;
	}
	void setSalary(int sal)
	{
		salary=sal;
		collectiveIncome += sal;
	}
	int getSalary()
	{
		return salary;
	}
	static int getCollectiveIncome() //only use static data members in it
	{
		return collectiveIncome;
	}
	friend void func(Income &inc, int tax);
	friend class Budget;
};

class Budget
{
	int budget;
	int expenses;
public:
	Budget(int b, int e)
	{
		budget=b;
		expenses=e;
	}
	int calculateSavings(Income &inc)  // but we shold pass refernce
	{
		int savings=inc.salary-expenses;
		return savings;
	}
};

int Income::collectiveIncome=0;  //static func or static data members are not essential to be associated with data members.

void func(Income &inc, int tax)  //will see in next class
{
	inc.salary=inc.salary-tax;
	inc.collectiveIncome=inc.collectiveIncome-tax;
}

int main()
{
	//int var=Income::getCollectiveIncome(); //static func or static data members are not essential to be associated with data members.
	//cout<<var<<endl;
	Income fatherIncome;  //compiler called its own constructor
	Income motherIncome;
	Income guardianIncome;
	
	int tax=500;
	
	fatherIncome.setSalary(75000);
	motherIncome.setSalary(60000);
	guardianIncome.setSalary(40000);
	
	func(fatherIncome, tax);
	func(motherIncome, tax);
	func(guardianIncome, tax);
	
	cout<<"Total income: "<<Income::getCollectiveIncome()<<endl;
	cout<<"Father income: "<<fatherIncome.getSalary()<<endl;
	cout<<"Mother income: "<<motherIncome.getSalary()<<endl;
	cout<<"Guardian income: "<<guardianIncome.getSalary()<<endl;
	
	int var=Income::getCollectiveIncome(); //static func or static data members are not essential to be associated with data members.
	cout<<"Collective Income using static func stored in var: "<<var<<endl;
	
	Budget b(var,30000);
	cout<<"Savings after Father expenses:"<<b.calculateSavings(fatherIncome)<<endl;
	cout<<"Savings after Mother expenses: "<<b.calculateSavings(motherIncome)<<endl;
	cout<<"Savings after Guardian expenses: "<<b.calculateSavings(guardianIncome)<<endl;
	return 0;
}
