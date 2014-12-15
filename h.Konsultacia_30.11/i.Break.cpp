#include<iostream>
using namespace std;

int main()
{
	while( true )
	{
		int number;
		cout << "Enter number (enter 0 to quit): ";
		cin >> number;

		//ako vuvedenoto chislo e 0 izlizame ot bezkrainia cikul
		if( !number )
		{
			break;
		}
	}
}