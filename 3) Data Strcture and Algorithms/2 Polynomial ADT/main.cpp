#include<iostream>
#include<cmath>
#include<algorithm>
#include"Term.h"
#include"Term.cpp"
#include"polynomial.h"
#include"polynomial.cpp"


using namespace std;


int main()
{
	int x;
		
	polynomial p1;
	cout<<"For polynomial 1: "<<endl;
	p1.input();
	cout<<"Polynomial 1: ";
	p1.show();
	cout<<endl;
	cout<<"Enter value of x: ";
	cin>>x;
	cout<<"Evaluation: "<<p1.evaluate(x)<<endl;
	
	cout<<endl;
	
	polynomial p2;
	cout<<"For polynomial 2: "<<endl;
	p2.input();
	cout<<"Polynomial 2: ";
	p2.show();
	cout<<endl;
	cout<<"Enter value of x: ";
	cin>>x;
	cout<<"Evaluation: "<<p2.evaluate(x)<<endl;
	
	cout<<endl;
	
	//polynomial pol3(p1);         //for copy constructor
	//cout<<"Polynomial 3: ";
	//pol3.show();
	//cout<<endl;
	
	//polynomial pol4;             //for operator=
	//pol4=pol3=p2=p1;
	//cout<<"Polynomial 4: ";
	//pol4.show();
	//cout<<endl;

	
	polynomial p3;
	p3=p1+p2;
	cout<<"Sum of two polynomials: ";
	p3.show();
	cout<<endl;
	
	polynomial p4;
	p4=p1-p2;
	cout<<"Difference of two polynomials: ";
	p4.show();
	cout<<endl;
	
	polynomial p5;
	p5=p1*p2;
	cout<<"Multiply of two polynomials: ";
	p5.show();
	cout<<endl;
	
	cout<<endl;
	
	Term t1;
	t1.input();
	t1.showTerm();
	polynomial p6=p1+t1;
	cout<<"Sum of polynomial 1 and above term: ";
	p6.show();
	cout<<endl;
	
	cout<<endl;
	
	Term t2;
	t2.input();
	t2.showTerm();
	polynomial p7=p1-t2;
	cout<<"Difference of above term from polynomial 1: ";
	p7.show();
	cout<<endl;
	
	cout<<endl;
	
	Term t3;
	t3.input();
	t3.showTerm();
	polynomial p8=p1*t3;
	cout<<"Multiplication of polynomial 1 and above term: ";
	p8.show();
	cout<<endl;
	
	return 0;
}

