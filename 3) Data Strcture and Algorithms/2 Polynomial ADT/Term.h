#ifndef TERM_H
#define TERM_H

#pragma once

#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>


using namespace std;

class Term
{
private:
	int cof;
	int exp;
public:
	Term();
	Term(int c,int e);
	void input();
	void showTerm();
	void setCof(int c);
	void setExp(int e);
	void set(int c,int e);
	int getCof();
	int getExp();
};



#endif //!TERM_H
