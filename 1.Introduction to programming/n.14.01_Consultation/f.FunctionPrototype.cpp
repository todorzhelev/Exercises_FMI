#include<iostream>

using namespace std;

//tova e prototip na funkciata IsEven.
bool IsEven(int number);

int main()
{
	bool even = IsEven(333);
}

bool IsEven(int number)
{
	if( number % 2 == 0 )
	{
		return true;
	}
	else
	{
		return false;
	}
}