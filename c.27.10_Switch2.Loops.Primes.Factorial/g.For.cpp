#include<iostream>
using namespace std;

int main()
{

	// for loop is the most used and most important of the loops.
	// we have 3 components: for( INITIALIZATION ; CONDITION ; INCREMENTATION ) 
	// INITIALIZATION   happens only at the beginning of the loop
	// CONDITION	    is checked at every iteration of the loop
	// INCREMENTATION   is performed at every iteration of the loop(after the first iteration)
	//					before CONDITION
					   

	//prints powers of 2
	for( int i = 0; i < 10; i++ )
	{
		float var = pow(2,i);
		cout << var << endl;
	}

	cout << endl;

	//finds the sum of the numbers from 0 to 100
	int sum = 0;
	for( int i = 0; i <= 100; i++ )
	{
		sum +=i;    // same as sum = sum + i;
	}
	cout << sum;

	system("pause");
}