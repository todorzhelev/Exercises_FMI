#include<iostream>
using namespace std;

// we test if certain number is prime by checking if it can be 
// divided with no reminder by number smaller than it

int main()
{
	int number;
	cout << "Enter number: ";
	cin >> number;

	bool bIsPrime = true; // we didnt do this at the exercise; we assume that number is prime
						  // later if it turns out it is not prime we change it to false

	//check every number smaller than number. Note that if number is big ( 1001 ) 
	//you have to do in worst case 999 iterations to see if it is prime
	for( int i = 2; i < number; i++ )
	{
		if( number % i == 0 )
		{
			cout << number <<" is not prime. It can be divided by " << i << endl;
			bIsPrime = false;

			break; //we found divisor and we know that number is not prime, so we leave the loop
		}
	}
	if( bIsPrime == true )
	{
		cout << number << " is prime" << endl;
	}

	system("pause");
}