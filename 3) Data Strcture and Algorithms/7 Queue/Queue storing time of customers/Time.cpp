#include "Time.h"
#include<iostream>

using namespace std;

Time::Time()
{
	hh=0;
	mm=0;
	ss=0;
}
Time::Time(int h,int m,int s)
{
	if(h>23)
	{
		h=23;
	}
	if(h<0)
	{
		h=0;
	}
	hh=h;
	if(m>59)
	{
		m=59;
	}
	if(m<0)
	{
		m=0;
	}
	mm=m;
	if(s>59)
	{
		s=59;
	}
	if(s<0)
	{
		s=0;
	}
	ss=s;
}
void Time::setHour(int h)
{
	if(h>23)
	{
		h=23;
	}
	if(h<0)
	{
		h=0;
	}
	hh=h;
}
void Time::setMin(int m)
{
	if(m>59)
	{
		m=59;
	}
	if(m<0)
	{
		m=0;
	}
	mm=m;
}
void Time::setSecond(int s)
{
	if(s>59)
	{
		s=59;
	}
	if(s<0)
	{
		s=0;
	}
	ss=s;
}
int Time::getHour()
{
	return hh;
}
int Time::getMin()
{
	return mm;
}
int Time::getSecond()
{
	return ss;
}
Time Time::Sum(Time t1,Time t2)
{
	Time result;
	result.ss=t1.ss+t2.ss;
	result.mm=t1.mm+t2.mm+(result.ss/60);
	result.hh=t1.hh+t2.hh+(result.mm/60);
	result.mm=result.mm%60;
	result.ss=result.ss%60;
	result.hh=result.hh%24;
	return result;
}
Time Time::Difference(Time t1,Time t2)
{
	Time result;
	if(t2.ss>t1.ss)
	{
		t1.mm--;
		t1.ss+=60;
	}
	result.ss=t1.ss-t2.ss;
	if(t2.mm>t1.mm)
	{
		t1.hh--;
		t1.mm+=60;
	}
	result.mm=t1.mm-t2.mm;
	result.hh=t1.hh-t2.hh;
	return result;
}
Time Time::secToTime(int x)
{
	Time t;
	t.hh=x/3600;
	x=x%3600;
	t.mm=x/60;
	x=x%60;
	t.ss=x;
	return t;
}
void Time::showTime()
{
	cout<<"Time: "<<hh<<":"<<mm<<":"<<ss<<endl;
}
