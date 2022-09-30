#include<iostream>
#define SIZE 50
using namespace std;

class Time
{
	int hh;
	int mm;
	int ss;
public:
	Time()
	{
		hh=0;
		mm=0;
		ss=0;
	}
	Time(int h,int m,int s)
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
	void setHour(int h)
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
	void setMin(int m)
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
	void setSecond(int s)
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
	int getHour()
	{
		return hh;
	}
	int getMin()
	{
		return mm;
	}
	int getSecond()
	{
		return ss;
	}
	Time Sum(Time t1,Time t2)
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
	Time Difference(Time t1,Time t2)
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
	Time secToTime(int x)
	{
		Time t;
		t.hh=x/3600;
		x=x%3600;
		t.mm=x/60;
		x=x%60;
		t.ss=x;
		return t;
	}
	void showTime()
	{
		cout<<"Time: "<<hh<<":"<<mm<<":"<<ss<<endl;
	}
};


class queue
{
    int front,rear;
    Time data[SIZE];
public:
    queue()
	{
        rear=front=-1;
    }
    bool isFull()
	{
        return (rear==SIZE-1);
    }
    bool isEmpty()
	{
        return (front==-1 || front>rear);
    }
    void insert(Time x)
	{
        if (rear==-1)
		{   // first item is being inserted
            front=rear=0;
            data[rear]=x;
        }
        else
		{
            if (isFull())
                cout<<"\nLast index filled in queue \n";
            else
                data[++rear]=x;
        }
    }

    Time dequeue()
	{
        if (!isEmpty())
		{
            return (data[front++]);
        }
        else
        {
            cout<<"Queue is empty ";
            return Time();
        }
    }
};

int main()
{
    queue q;
	Time t1(2,0,0);
	Time t2(1,1,1);
	Time t;
	int calls;
	cout<<"Enter number of calls: ";
	cin>>calls;
	int h,m,s;
	for(int i=0;i<calls;i++)
	{
		cout<<"Enter recieving time of call "<<i+1<<endl;
		cout<<"hour: ";
		cin>>h;
		cout<<"Minute: ";
		cin>>m;
		cout<<"Seconds: ";
		cin>>s;
		t1.setHour(h);
		t1.setMin(m);
		t1.setSecond(s);
		t1.showTime();
		cout<<"Enter response time of call "<<i+1<<endl;
		cout<<"hour: ";
		cin>>h;
		cout<<"Minute: ";
		cin>>m;
		cout<<"Seconds: ";
		cin>>s;
		t2.setHour(h);
		t2.setMin(m);
		t2.setSecond(s);
		t2.showTime();
		t=t.Difference(t2,t1);
		q.insert(t);
	}
	int arr[calls];
	for(int i=0;i<calls;i++)
	{
		t=q.dequeue();
		arr[i]=t.getHour()*24+t.getMin()*60+t.getSecond();  //to seconds.
		cout<<"Time customer "<<i+1<<" waits for: ";
		t.showTime();
	}
	int sum=0;
	for(int i=0;i<calls;i++)
	{
		sum+=arr[i];
	}
	int avg=sum/calls;
	Time ti;
	ti=ti.secToTime(avg);
	cout<<"Average time customers wait for: ";
	ti.showTime();
	return 0; 
}
