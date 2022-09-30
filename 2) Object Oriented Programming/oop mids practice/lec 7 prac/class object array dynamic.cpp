#include<iostream>

using namespace std;

class rectangle
{
private:
	double length;
	double width;

public:
	double *ptr;
	rectangle();
	rectangle(double l, double w);
	void setLength(double len);
	void setWidth(double wid);
	double getLength();
	double getWidth();
	double computeArea();
	void draw();
};

void rectangle::setLength(double len)
{
	if(len<0)
	{
		len=0; 
	}
	length=len;
}

void rectangle::setWidth(double wid)
{
	if(wid<0)
	{
		wid=0;
	}
	width=wid;
}

double rectangle::getLength()
{
	return length;
}

double rectangle::getWidth()
{
	return width;
}

double rectangle::computeArea()
{
	return length*width;
}

void rectangle::draw()
{
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<width;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

rectangle::rectangle()
{
	length=0;
	width=0;
}

rectangle::rectangle(double l,double w)
{
	if(l<0)
	{
		l=0;
	}
	length=l;
	if(w<0)
	{
		w=0;
	}
	width=w;
	ptr=&length;
}


int main()
{
	double len,wid;
	//rectangle *rectptr=new rectangle[3];
	rectangle *rectptr=new rectangle[3];
	rectangle rec;
	rectangle *ptr=&rec;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter length: ";
		cin>>len;
		cout<<"Enter width: ";
		cin>>wid;
		rectptr[i].setLength(len);
		rectptr[i].setWidth(wid);
	}
	

//	cout<<(*re[0]).ptr<<endl;   
	cout<<(ptr)->getLength()<<endl;   //why not->?   ma aik min aya
	
	for(int i=0;i<3;i++)
	{
		cout<<"Length: "<<rectptr[i].getLength()<<endl;
		cout<<"Width: "<<rectptr[i].getWidth()<<endl;
		cout<<"Area: "<<rectptr[i].computeArea()<<endl;
		cout<<"Rectangle:-"<<endl;
		rectptr[i].draw();
	}
	
	delete []rectptr;
	
	return 0;
}
