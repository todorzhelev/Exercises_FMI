#include<iostream>
using namespace std;

//e is global variable - we can use it in the whole cpp file after it is defined
float e = 2.71828182;

void Print()
{
	//number is local variable for the function Print.
	//it can be used to the end of the function - }
	int number = 6;

	// e is global variable and we can use it everywhere
	cout << e << endl;

	cout << number << endl;
}

int main()
{
	cout << e << endl;

	//Error. number is not defined here, but in the function Print
	number++;

	// a is local variable for the main function
	int a = 5;

	if ( a == 5)
	{
		//we define b here, so it is local variable for this block of code.
		//I.e. b can be used until the } of the if
		int b = 6;

		cout << b << endl;
	} //b is no longer available.

	//Error.
	cout << b << endl;

	system("pause");
}