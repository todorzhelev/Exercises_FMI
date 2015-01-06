#include<iostream>

using namespace std;

//finds the n-th number of Fibonacci sequence
int GetFibNumber(int n)
{
	if( n == 0 )
	{
		return 0;
	}

	if( n == 1 )
	{
		return 1;
	}

	return GetFibNumber(n-1) + GetFibNumber(n-2);
}

int main()
{
	//The Fibonacci sequence is 1 1 2 3 5 8 13 21 34 55 ..

	//the seventh number in the sequence is 13
	int number = GetFibNumber(7);	

	cout << number << endl;

	system("pause");
}
