#include<iostream>

using namespace std;

//public inheritance
//you can see table of the different types of inheritance here: http://goo.gl/1WOMDz

class Base
{
public:
	int a;
private:
	int b;
protected:
	int c;
};

class Derived : public Base
{
public:
	Derived()
	{
		a = 8;
		b = 10; //b is private and cannot be accessed here
		c = 12;
	}
};


int main()
{
	Derived der;
	der.a = 100;
	der.b = 101; //b is private and cannot be accessed here
	der.c = 102; //c is protected and cannot be accessed here
}