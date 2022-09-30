#ifndef TIME_H
#define TIME_H

#pragma once

#include<iostream>
#include<string>

class Time
{
	int hh;
	int mm;
	int ss;
public:
	Time();
	Time(int h,int m,int s);
	void setHour(int h);
	void setMin(int m);
	void setSecond(int s);
	int getHour();
	int getMin();
	int getSecond();
	Time Sum(Time t1,Time t2);
	Time Difference(Time t1,Time t2);
	Time secToTime(int x);
	void showTime();
};

#endif //!TIME_H
