#include<iostream>
using namespace std;

int main()
{
	// we create infinite loop by putting 1000 as condition. Every number different than zero will be counted as TRUE 
	// and we will enter the loop
	// if we have break inside loop we can leave the loop regardless of the conditions
	int a;
	while(1000)
	{
		cout << "Press 1 for 1000000$" << endl;
		cout << "Press 2 for chocolate" << endl;
		cout << "Press 3 for BMW X5" << endl;
		cout << "Press 4 for 6 on DIS" << endl;
		cout << "Press 5 to exit" << endl;

		cin >> a;
		
		if( a == 5 )
		{
			break;
		}

		cout << endl << "ako e 5 ne stiga do tuk" << endl << endl;
	}

	system("pause");
}