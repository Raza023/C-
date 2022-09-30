#include "Polynomial.h"
#include<iostream>

using namespace std;

polynomial::polynomial()
{
	degree=0;
	t=NULL;
}
polynomial::polynomial(int d)
{
	if(d<0)
	{
		d=0;
	}
	else
	{
		degree=d;
		t=new Term[d+1];
	}	
}
polynomial::polynomial(const polynomial &right)
{
	degree=right.degree;
	this->t=new Term[this->degree+1];
	for(int i=degree;i>=0;i--)
	{
		this->t[i].setExp(right.t[i].getExp());
		this->t[i].setCof(right.t[i].getCof());
	}
}

polynomial polynomial::operator=(const polynomial &right)
{
	if (t != NULL)
	{
		delete []t;
		t = NULL;
	}
	this->degree=right.degree;
	this->t=new Term[this->degree+1];
	for(int i=degree;i>=0;i--)
	{
		this->t[i].setExp(right.t[i].getExp());
		this->t[i].setCof(right.t[i].getCof());
	}
	return *this;
}

void polynomial::input()
{
	int var;
	cout<<"Enter degree of polynomial: ";
	cin>>degree;
	while(degree<0)
	{
		cout<<"Please enter correct degree: ";
		cin>>degree;
	}
	t=new Term[degree+1];
	for(int i=degree;i>=0;i--)
	{
		cout<<"Enter co-effecient of exponent "<<i<<": ";
		cin>>var;
		t[i].setCof(var);
		t[i].setExp(i);
	}
}
void polynomial::show()
{
	for(int i=degree;i>=0;i--)
	{
		if(t[i].getCof()!=0)
		{
			cout<<t[i].getCof()<<"x^"<<t[i].getExp();
		}
		if(t[--i].getCof()>0&&i!=-1)
		{
			cout<<"+";
		}
		++i;
	}
}

double polynomial::evaluate(double v)
{
	double result=0;
	for(int i=degree;i>=0;i--)
	{
		result+=t[i].getCof()*pow(v,t[i].getExp());
	}
	return result;
}

polynomial polynomial::operator+(const polynomial &right)
{
	int tdegree;
	if(degree>right.degree)
	{
		tdegree=degree;
	}
	else
	{
		tdegree=right.degree;
	}
	int j=tdegree;
	polynomial result(tdegree);
	
	if(degree==right.degree)
	{
		for(int i=right.degree;i>=0;i--)
		{
			result.t[i].setExp(right.t[i].getExp());
			result.t[i].setCof(t[i].getCof()+right.t[i].getCof());
		}
	}
	else
	{
		cout<<tdegree<<endl;
		if(degree>right.degree)
		{
			int i=degree;
			int k=right.degree;
			while(t[i].getExp()!=right.t[k].getExp())
			{
				result.t[j].setExp(t[i].getExp());
				result.t[j].setCof(t[i].getCof());
				i--;
				j--;
			}
			for(int p=right.degree;p>=0;p--)
			{
				result.t[j].setExp(right.t[k].getExp());
				result.t[j].setCof(t[i].getCof()+right.t[k].getCof());
				i--;
				j--;
				k--;
			}
		}
		else if(degree<right.degree)
		{
			int i=degree;
			int k=right.degree;
			while(right.t[k].getExp()!=t[i].getExp())
			{
				result.t[j].setExp(right.t[k].getExp());
				result.t[j].setCof(right.t[k].getCof());
				j--;
				k--;
			}
			for(int p=degree;p>=0;p--)
			{
				result.t[j].setExp(right.t[k].getExp());
				result.t[j].setCof(t[i].getCof()+right.t[k].getCof());
				i--;
				j--;
				k--;
			}
		}
	}
	return result;
}

polynomial polynomial::operator+(Term right)
{
	int tdegree;
	if(degree>right.getExp())
	{
		tdegree=degree;
	}
	else
	{
		tdegree=right.getExp();
	}
	polynomial result(tdegree);
	
	for(int i=tdegree;i>=0;i--)
	{
		if(right.getExp()<=degree)
		{
			if(i!=right.getExp())
			{
				result.t[i].setExp(t[i].getExp());
				result.t[i].setCof(t[i].getCof());
			}
			else if(i==right.getExp())
			{
				result.t[i].setExp(t[i].getExp());
				result.t[i].setCof(t[i].getCof()+right.getCof());
			}
		}
		else if(right.getExp()>degree)
		{
			if(i==right.getExp())
			{
				result.t[i].setExp(right.getExp());
				result.t[i].setCof(right.getCof());
			}
			else if(i>degree)
			{
				result.t[i].setExp(i);
				result.t[i].setCof(0);
			}
			else
			{
				result.t[i].setExp(t[i].getExp());
				result.t[i].setCof(t[i].getCof());
			}
		}
	}
	return result;
}

polynomial polynomial::operator-(const polynomial &right)
{
	int tdegree;
	if(degree>right.degree)
	{
		tdegree=degree;
	}
	else
	{
		tdegree=right.degree;
	}
	int j=tdegree;
	polynomial result(tdegree);
	
	int neg[right.degree];
	for(int i=right.degree;i>=0;i--)
	{
		neg[i]=right.t[i].getCof();
		neg[i]*=-1;
	}
	
	if(degree==right.degree)
	{
		for(int i=right.degree;i>=0;i--)
		{
			result.t[i].setExp(right.t[i].getExp());
			result.t[i].setCof(t[i].getCof()+neg[i]);
		}
	}
	else
	{
		cout<<tdegree<<endl;
		if(degree>right.degree)
		{
			int i=degree;
			int k=right.degree;
			while(t[i].getExp()!=right.t[k].getExp())
			{
				result.t[j].setExp(t[i].getExp());
				result.t[j].setCof(t[i].getCof());
				i--;
				j--;
			}
			for(int p=right.degree;p>=0;p--)
			{
				result.t[j].setExp(right.t[k].getExp());
				result.t[j].setCof(t[i].getCof()+neg[k]);
				i--;
				j--;
				k--;
			}
		}
		else if(degree<right.degree)
		{
			int i=degree;
			int k=right.degree;
			while(right.t[k].getExp()!=t[i].getExp())
			{
				result.t[j].setExp(right.t[k].getExp());
				result.t[j].setCof(neg[k]);
				j--;
				k--;
			}
			for(int p=degree;p>=0;p--)
			{
				result.t[j].setExp(right.t[k].getExp());
				result.t[j].setCof(t[i].getCof()+neg[k]);
				i--;
				j--;
				k--;
			}
		}
	}
	return result;
}

polynomial polynomial::operator-(Term right)
{
	int tdegree;
	if(degree>right.getExp())
	{
		tdegree=degree;
	}
	else
	{
		tdegree=right.getExp();
	}
	polynomial result(tdegree);
	int neg=right.getCof();
	neg*=-1;
	for(int i=tdegree;i>=0;i--)
	{
		if(right.getExp()<=degree)
		{
			if(i!=right.getExp())
			{
				result.t[i].setExp(t[i].getExp());
				result.t[i].setCof(t[i].getCof());
			}
			else if(i==right.getExp())
			{
				result.t[i].setExp(t[i].getExp());
				result.t[i].setCof(t[i].getCof()+neg);
			}
		}
		else if(right.getExp()>degree)
		{
			if(i==right.getExp())
			{
				result.t[i].setExp(right.getExp());
				result.t[i].setCof(neg);
			}
			else if(i>degree)
			{
				result.t[i].setExp(i);
				result.t[i].setCof(0);
			}
			else
			{
				result.t[i].setExp(t[i].getExp());
				result.t[i].setCof(t[i].getCof());
			}
		}
	}
	return result;
}
polynomial polynomial::operator*(const polynomial &right)
{
	int max;
	int min;
	int c;
	if(degree>right.degree)
	{
		c=0;
		max=degree;
		min=right.degree;
	}
	else
	{
		c=1;
		max=right.degree;
		min=degree;
	}	
	polynomial result(min+max);
	polynomial pol[min+1];
	if(c==0)
	{
		for(int i=min;i>=0;i--)
		{
			pol[i]=right;
		}
	}
	else
	{
		for(int i=min;i>=0;i--)
		{
			pol[i]=*this;
		}
	}
	
	for(int i=min;i>=0;i--)
	{
		for(int j=max;j>=0;j--)
		{ 
			pol[i].t[j].setExp(t[j].getExp()+right.t[j].getExp());
			pol[i].t[j].setCof(t[j].getCof()*right.t[j].getCof());
		}
	}
	result=pol[min];
	for(int j=min-1;j>=0;j--)
	{
		result=result+pol[j]; 
	}
	return result;
}
polynomial polynomial::operator*(Term right)
{
	int tdegree=degree;
	polynomial result(tdegree);
	for(int i=tdegree;i>=0;i--)
	{
		result.t[i].setExp(t[i].getExp()+right.getExp());
		result.t[i].setCof(t[i].getCof()*right.getCof());
	}
	return result;
}
polynomial::~polynomial()
{
	if(t)
	{
		delete []t;
		t=NULL;
	}
}
