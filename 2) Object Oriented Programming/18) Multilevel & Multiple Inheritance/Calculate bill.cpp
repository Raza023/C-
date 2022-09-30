#include<iostream>
#include<string>

using namespace std;


class Bill
{
private:
	string name;
	int billNo;
	int units;
public:
	Bill()
	{
		name=" ";
		billNo=1;
		units=0;
	}
	Bill(string n,int b,int u)
	{
		name=n;
		if(b<1)
		{
			b=1;
		}
		billNo=b;
		if(u<0)
		{
			u=0;
		}
		units=u;
	}
	~Bill()
	{
		
	}
	void setBill(string n,int b,int u)
	{
		name=n;
		if(b<1)
		{
			b=1;
		}
		billNo=b;
		if(u<0)
		{
			u=0;
		}
		units=u;
	}
	void setName(string n)
	{
		name=n;
	}
	void setBillNo(int b)   
	{
		if(b<1)
		{
			b=1;
		}
		billNo=b;
	}
	void setUnits(int u)
	{
		if(u<0)
		{
			u=0;
		}
		units=u;
	}
	string getName()
	{
		return name;
	}
	int getBillNo()   
	{
		return billNo;
	}
	int getUnits()
	{
		return units;
	}
	void takeInput()
	{
		cout<<"Enter your name: ";
		getline(cin,name);
		cout<<"Enter your bill no: ";
		cin>>billNo;
		cout<<"Enter your units consumed: ";
		cin>>units;
	}
	int calculateBill()
	{
		int unitPrice;
		if(units<300)
		{
			unitPrice=4;
		}
		else if(units>=300&&units<1000)
		{
			unitPrice=5;
		}
		else if(units>999)
		{
			unitPrice=7;
		}
		return unitPrice*units;
	}
	void displayBill()
	{
		cout<<"\n\tBill"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Bill No: "<<billNo<<endl;
		cout<<"Units: "<<units<<endl;
		cout<<"Bill: "<<calculateBill()<<endl;
	}
};

int main()
{
	Bill b("Hussain Ahmed",7568,700);
	cout<<"\tBill"<<endl;
	cout<<"Name: "<<b.getName()<<endl;
	cout<<"Bill No: "<<b.getBillNo()<<endl;
	cout<<"Units: "<<b.getUnits()<<endl;
	cout<<"Bill: "<<b.calculateBill()<<endl;
	cout<<endl;
	cout<<"Now taking input for another bill."<<endl;
	cout<<endl;
	b.takeInput();
	b.displayBill();
	return 0;
}
