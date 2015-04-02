#include<iostream>

using namespace std;

//the access modifiers in C++ are public, private and protected
//when there is no inheritance protected modifier is the same as private modifier
//if we have public inheritance protected member from Base class can be accessed
//in the derived class
class Base
{
public:

	Base()
	{
		m_a = 100;
	}

protected:
	int m_a;
};

class Derived : public Base
{
public:
	Derived()
	{
		//m_a can be accessed inside the derived class
		cout << m_a << endl;
	}
};


int main()
{
	Derived der;
	
	//m_a cannot be accessed outside
	der.m_a = 105;
}