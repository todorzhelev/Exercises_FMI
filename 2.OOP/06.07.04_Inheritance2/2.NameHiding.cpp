#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	void GetMeaningOfLife()
	{
		cout << "The meaning of life is 42" << endl;
	}

	void GetMeaningOfLife(int n)
	{
		cout << "The meaning of life is " << n << endl;
	}

	void GetMeaningOfLife(string s)
	{
		cout << "The meaning of life is " << s << endl;
	}
};

class Derived : public Base
{
public:

	//the function with the same name as in Base class
	//hides ALL the functions in Base class. I.e.
	//if you have object of Derived class you cannot
	//access GetMeaningOfLife(string s) and GetMeaningOfLife(int n)
	void GetMeaningOfLife()
	{
		cout << "The meaning of life is 777" << endl;
	}

	//to fix this problem add this lane
	using Base::GetMeaningOfLife;
};


int main()
{
	Derived der;
	der.GetMeaningOfLife("asdf");

	system("pause");
}