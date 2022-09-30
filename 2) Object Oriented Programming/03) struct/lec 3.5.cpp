#include<iostream>
#include<string>
using namespace std;

struct student      //ADT's
{
	string name;
	string rollNo;
	double cgpa;
	int semester;
};

int main()
{
	student std = {"Hassan Raza","BITF19A023",3.82,3};      //declaring and initializing a variable with abstract datatypes.
	
	student anotherstd[3];    //declaring another array with ADT.
	
	for(int i=0;i<3;i++)     //population
	{
		cout<<"Enter name of student "<<i+1<<": ";
		getline(cin,anotherstd[i].name);
		cout<<"Enter roll no. of student "<<i+1<<": ";
		getline(cin,anotherstd[i].rollNo);
		cout<<"Enter cgpa of student "<<i+1<<": ";
		cin>>anotherstd[i].cgpa;
		cout<<"Enter semester no. of student "<<i+1<<": ";
		cin>>anotherstd[i].semester;
		cout<<endl;
		cin.ignore(20,'\n');
	}
	
	int topperidx=0;
	double topper=anotherstd[0].cgpa;
	for(int i=0;i<3;i++)
	{
		if(topper<anotherstd[i].cgpa)
		{
			topper=anotherstd[i].cgpa;
			topperidx=i;
		}
	}
	
	cout<<anotherstd[topperidx].name<<" is topper of the class with "<<topper<<" CGPA."<<endl; //anotherstd[topperidx].cgpa = we can also use it.
	return 0;
}
