#include<iostream>

using namespace std;


class MidTerm
{
private:
	int *marks;
	int index;
	int question;
public:
	MidTerm(int s)
	{
		if(s>0)
		{
			question=s;
			index=0;
			marks=new int[question];
			for(int i=0;i<question;i++)
			{
				marks[i]=0;
			}
		}
		else
		{
			cout<<"Invalid size."<<endl;
		}
	}
	~MidTerm()
	{
		delete []marks;
		marks=NULL;
	}
	void addelement(int value)
	{
		if(index<question)
		{
			marks[index]=value;
			index++;
		}
		else
		{
			cout<<"Array is full."<<endl;
		}
	}
	int getelement(int i)
	{
		if(i>=0&&i<question)
		{
			return marks[i];
		}
		else
		{
			cout<<"Invalid Index."<<endl;
			return -1;
		}
	}
};



int main()
{
	MidTerm m(5);
	int a;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>a;
		m.addelement(a);
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Value "<<i+1<<": "<<m.getelement(i)<<endl;
	}
	
	return 0;
}
