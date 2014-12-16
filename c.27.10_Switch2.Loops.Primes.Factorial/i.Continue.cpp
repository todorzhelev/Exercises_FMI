#include<iostream>
using namespace std;

int main()
{
	///////////////////////////////////////////////////////////////////////////////////////////////////////

	// with continue inside loop we can skip the current iteration and jump directly at the beginning of the loop
	// regardless of what is below the continue.
	// again, use breakpoints to be sure you got the idea
	for( int i = 0; i < 10; i++ )
	{
		if( i % 3 == 1 )
		{
			continue;
		}

		cout << i << endl;
	}

	system("pause");

}