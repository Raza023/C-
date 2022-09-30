#include<iostream>
#include<string>

using namespace std;

class account
{
	int accNo;
	string detail;
	int accId;
public:
	account()
	{
		accNo=01;
		detail=" ";
		accId=0;
	}
	account(int ano,string d,int aid)
	{
		if(ano<0)
		{
			ano=0;
		}
		accNo=ano;
		detail=d;
		if(aid<0)
		{
			aid=0;
		}
		accId=aid;
	}
	void setAccNo(int ano)
	{
		if(ano<0)
		{
			ano=0;
		}
		accNo=ano;
	}
	void setDetail(string d)
	{
		detail=d;
	}
	void setAccId(int aid)
	{
		if(aid<0)
		{
			aid=0;
		}
		accId=aid;
	}
	int getAccNo()
	{
		return accNo;
	}
	string getDetail()
	{
		return detail;
	}
	int getAccId()
	{
		return accId;
	}
};

class Employee
{
	string name;
	int id;
	string dept;
	account acc;
public:
	Employee():acc()
	{
		name=" ";
		id=0;
		dept=" ";
	}
	Employee(string n,int i,string dep,int aid,string ad,int an)
	{
		name=n;
		if(i<0)
		{
			i=0;
		}
		id=i;
		dept=dep;
		acc.setAccId(aid);
		acc.setDetail(ad);
		acc.setAccNo(an);
	}
	void setName(string n)
	{
		name=n;
	}
	void setEmpId(int i)
	{
		if(i<0)
		{
			i=0;
		}
		id=i;
	}
	void setDept(string dep)
	{
		dept=dep;
	}
	string getName()
	{
		return name;
	}
	int getId()
	{
		return id;
	}
	string getDept()
	{
		return dept;
	}
	void display()
	{
		cout<<"Employee name: "<<name<<endl;
		cout<<"Employee Id: "<<id<<endl;
		cout<<"Employee dept: "<<dept<<endl;
		cout<<"Emplyee account no.: "<<acc.getAccId()<<endl;
		cout<<"Employee account details: "<<acc.getDetail()<<endl;
		cout<<"Employee: account Id: "<<acc.getAccNo()<<endl;
	}
};

int main()
{
	//account acc;
	Employee emp("Hassan Raza",1023,"IT",23,"IN USE",1831);
	emp.display();
	return 0;
}
