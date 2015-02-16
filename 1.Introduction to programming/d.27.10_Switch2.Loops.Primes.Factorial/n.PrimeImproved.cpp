#include<iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	
	bool bIsPrime = true;

	//improved check. We test only the first sqrt(number) numbers. If number is 1001 this is maximum 30 iterations
	for( int i = 2; i <= sqrt(number); i++ )
	{
		if( number % i == 0 )
		{
			cout << number <<" is not prime. It can be divided by " << i << endl;
			bIsPrime = false;
			break;
		}
	}

	if( bIsPrime == true )
	{
		cout << number << " is prime" << endl;
	}

	system("pause");
}