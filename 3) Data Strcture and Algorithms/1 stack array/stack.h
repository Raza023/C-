#ifndef STACK_H
#define STACK_H

#pragma once

#include<iostream>
#include<string>
#define SIZE 100

template <class T>
class stack
{
	T data[SIZE];
	int top=-1;
public:
	stack();
	void push(T x);
	T pop();
	T Top();
	int size(); //number of elements in stack.
	bool isFull();
	bool isEmpty();
	bool MatchingParenthesis(char exp[]);
	bool isOperator(char ch);
	bool isOperand(char ch);
	bool isNumericDigit(char ch);
	int precedence(char op);
	bool isLeftParenthesis(char ch);
	bool isRightParenthesis(char ch);
};

#endif //!STACK_H
