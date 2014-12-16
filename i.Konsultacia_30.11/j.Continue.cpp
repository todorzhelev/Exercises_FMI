#include<iostream>
using namespace std;

int main()
{
	for( int i = 0; i < 10; i++ )
	{
		cout << "Current number: " << i << endl;

		if( i % 2 == 1 )
		{
			continue;
		}

		//tozi red se izpulniava samo ako i e chetno chislo
		cout << "asdf" << endl;
	}
}