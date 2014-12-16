#include<iostream>
using namespace std;

int main()
{
	//prints the digits of a number
	int a = 567123;

	while( a > 0 )
	{
		cout << a %10 << endl;
		a/=10; // a = a/10;
	}

	system("pause");
}