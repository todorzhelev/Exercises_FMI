#include<iostream>

using namespace std;

int GetFactorial(int number)
{
	if( number == 0 )
	{
		return 1;
	}

	return number*GetFactorial(number-1);
}

int main()
{

	int result = GetFactorial(5);	

	cout << result << endl;

	system("pause");
}