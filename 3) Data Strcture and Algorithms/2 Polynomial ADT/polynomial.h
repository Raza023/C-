#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#pragma once

#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

class polynomial
{
	int degree;
	Term *t;
public:
	polynomial();
	polynomial(int d);
	polynomial(const polynomial &right);
	polynomial operator=(const polynomial &right);
	void input();
	void show();
	double evaluate(double v);
	polynomial operator+(const polynomial &right);
	polynomial operator+(Term right);
	polynomial operator-(const polynomial &right);
	polynomial operator-(Term right);
	polynomial operator*(const polynomial &right);
	polynomial operator*(Term right);
	~polynomial();
};

#endif //!POLYNOMIAL_H
