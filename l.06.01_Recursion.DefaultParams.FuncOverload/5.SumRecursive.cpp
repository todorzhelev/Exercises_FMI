#include<iostream>

using namespace std;

//finds the sum 1+2+3+..+number
int GetSum(int number)
{
	if( number == 1 )
	{
		return 1;
	}

	return number+GetSum(number-1);
}

int main()
{
	int sum = GetSum(4);	

	cout << sum << endl;

	system("pause");
}