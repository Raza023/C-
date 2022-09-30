#ifndef MYCLASS_H
#define MYCLASS_H

#pragma once

class MyClass
{
	int a; 
	int b; 
	static int objectCount;
public: 
	MyClass(int x = 10, int y = 20);
	int getValue();
	int getobjectCount();
};
#endif // !MYCLASS_H
