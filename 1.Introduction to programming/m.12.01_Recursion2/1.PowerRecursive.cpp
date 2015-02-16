#include<iostream>

using namespace std;

//calculates number^power
double Pow(double number, int power)
{
	if( power == 0 )
	{
		return 1;
	}

	return number*Pow(number,power-1);
}

int main()
{
	double result = Pow(2,3);
	cout << result << endl;

	system("pause");
}


