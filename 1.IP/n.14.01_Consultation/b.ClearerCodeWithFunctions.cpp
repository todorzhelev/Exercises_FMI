#include<iostream>

using namespace std;

bool IsPrime(int number)
{
	bool isPrime = true;
	for( int i = 2; i <= sqrt(number); i++ )
	{
		if( number % i == 0 )
		{
			isPrime = false;
			break;
		}
	}

	return isPrime;
}

int GetDigitsSum(int number)
{
	int sum = 0;
	int temp = number;
	while( temp > 0 )
	{
		sum += temp %10;
		temp/=10;
	}

	return sum;
}

int main()
{
	//na pruv pogled moje da ne e ochevidno kakvo pravi tozi kod
	/*for( int i = 3; i < 150; i++ )
	{
		bool isPrime = true;
		for( int j = 2; j <= sqrt(i); j++ )
		{
			if( i % j == 0 )
			{
				isPrime = false;
				break;
			}
		}

		if( isPrime )
		{
			int sum = 0;
			int temp = i;
			while( temp > 0 )
			{
				sum += temp %10;
				temp/=10;
			}

			cout << i << " " << sum << endl;
		}
	}*/

	//chrez funkcii vednaga stava iasno kakvo pravi koda
	for( int i = 3; i < 150; i++ )
	{
		if( IsPrime(i) )
		{
			cout << i << " " << GetDigitsSum(i) << endl;
		}
	}
}