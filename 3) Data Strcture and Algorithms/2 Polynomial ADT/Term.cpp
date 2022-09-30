#include "Term.h"
#include<iostream>

using namespace std;

Term::Term()
{
	cof=0;
	exp=0;
}
Term::Term(int c,int e)
{
	cof=c;
	if(e<0)
	{
		e=0;
	}
	exp=e;
}
void Term::input()
{
	int c;
	int e;
	cout<<"Enter coeffecient of term: ";
	cin>>c;
	cof=c;
	cout<<"Enter exponent of term: ";
	cin>>e;
	if(e<0)
	{
		e=0;
	}
	exp=e;
}
void Term::showTerm()
{
	cout<<"Term: "<<cof<<"x^"<<exp<<endl;
}
void Term::setCof(int c)
{
	cof=c;
}
void Term::setExp(int e)
{
	if(e<0)
	{
		e=0;
	}
	exp=e;
}
void Term::set(int c,int e)
{
	cof=c;
	if(e<0)
	{
		e=0;
	}
	exp=e;
}
int Term::getCof()
{
	return cof;
}
int Term::getExp()
{
	return exp;
}
