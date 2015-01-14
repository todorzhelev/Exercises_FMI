#include<iostream>

using namespace std;

void IsPrime(int number)
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

	isPrime ? cout << number << " e prosto" << endl : cout << number << " e sustavno" << endl;
}

int main()
{
	int number1 = 17, number2 = 31, number3 = 35;

	bool isPrime = true;
	for( int i = 2; i <= sqrt(number1); i++ )
	{
		if( number1 % i == 0 )
		{
			isPrime = false;
			break;
		}
	}

	isPrime ? cout << number1 << " e prosto" << endl : cout << number1 << " e sustavno";

	isPrime = true;
	for( int i = 2; i <= sqrt(number2); i++ )
	{
		if( number2 % i == 0 )
		{
			isPrime = false;
			break;
		}
	}

	isPrime ? cout << number2 << " e prosto" << endl : cout << number2 << " e sustavno";

	isPrime = true;
	for( int i = 2; i <= sqrt(number3); i++ )
	{
		if( number3 % i == 0 )
		{
			isPrime = false;
			break;
		}
	}

	isPrime ? cout << number3 << " e prosto" << endl : cout << number3 << " e sustavno";

	//kodut otgore e zamenen s tri izvikvania na funkciata IsPrime, koeto go pravi mnogo po-chetim i iasen. 
	//Sushto taka ako sme dopusnali greshka v algorituma shte triabva da ia opravim samo 
	//vutre vuv funkciata, a ne na vsichi mesta, kudeto se povtaria koda
	IsPrime(number1);
	IsPrime(number2);
	IsPrime(number3);
}