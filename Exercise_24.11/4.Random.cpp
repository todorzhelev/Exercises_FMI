#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int GetRandomNumberInRange(int lowerLimit, int upperLimit)
{
	int difference = upperLimit - lowerLimit;

	int number = rand() % difference;

	return lowerLimit + number;
}

int main()
{
	// RAND_MAX is 0x7fff or 32767 in decimal
	// rand returns pseudo-random number in the range [0,RAND_MAX]
	int randomNumber = rand();
	
	//after each execution returns the same number
	cout << "not really random number: " << randomNumber << endl;

	//we have to set different seed to the random number generator
	//so we can have indeed random numbers each time we start the program
	srand(time(NULL));

	int reallyRandomNumber = rand();
	cout << "This number is now indeed random: " << reallyRandomNumber << endl;

	// we can limit the range by using division with remainder
	int number = rand()%100;
	cout << "The random number is in [0,100): " << number << endl;

	int year = rand()%30 + 2000;
	cout << "Random year in [2000,2029]: " << year << endl;

	int numberInRange = GetRandomNumberInRange(10,25);
	cout << "Random number in the range [10,25] is: " << numberInRange << endl;


	system("pause");
}