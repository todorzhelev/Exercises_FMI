#include<iostream>
using namespace std;

int main()
{
	int a = 5, b =7;

	//swap the values of two variables by temporary variable
	int temp = a;
	a = b;
	b = temp;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	cout << endl;

	int c = 12, d = 6;

	//swap the values of two variables by addition and substraction
	c = c + d;		// c = 5 + 7 = 12
	d = c - d;		// d = 12 - 7 = 5
	c = c - d;		// c = 12 - 5 = 7

	cout << "c: " << c << endl;
	cout << "d: " << d << endl;

	system("pause");

}