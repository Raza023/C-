#include<iostream>
#define SIZE 100
#include"Time.h"
//#include"Time.cpp"
#include"queue.h"
//#include"queue.cpp"

using namespace std;

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
	
	cout<<endl;
	
	int arr[calls];
	for(int i=0;i<calls;i++)
	{
		t=q.dequeue();
		arr[i]=t.getHour()*24+t.getMin()*60+t.getSecond();  //to seconds.
		cout<<"Time customer "<<i+1<<" waits for: ";
		t.showTime();
	}
	
	cout<<endl;
	
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
