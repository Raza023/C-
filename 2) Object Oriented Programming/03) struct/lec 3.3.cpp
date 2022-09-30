#include<iostream>
#include<string>
using namespace std;

struct student      //ABD's
{
	string name;
	string rollNo;
	double cgpa;
	int semester;
};

int main()
{
	student std = {"Hassan Raza","BITF19A023",3.82,2};      //declaring and initializing a variable with abstract datatypes.
	
	student anotherstd[2];    //declaring another array with ABD.
	
	for(int i=0;i<2;i++)     //population   [0] or [1]    cin>> cin.ignore() getline()
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
	
	cout<<"\n-------------------\nData you entered...\n-------------------\n\n";
	
	for(int i=0;i<2;i++)   //Display
	{
		cout<<"Name of student "<<i+1<<": "<<anotherstd[i].name<<endl;
		cout<<"Roll no. of student "<<i+1<<": "<<anotherstd[i].rollNo<<endl;
		cout<<"cgpa of student "<<i+1<<": "<<anotherstd[i].cgpa<<endl;
		cout<<"Semester no. of student "<<i+1<<": "<<anotherstd[i].semester<<endl;
		cout<<endl;
	}
	
	return 0;
}
