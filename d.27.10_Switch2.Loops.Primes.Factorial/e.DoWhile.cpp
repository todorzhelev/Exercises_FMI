#include<iostream>
using namespace std;

int main()
{
	// the body of do-while loop is guaranteed to be executed atleast once
	// in this example we dont have counter and we will leave the loop when a is 5
	// note that there is ; after the end of while( a != 5 )

	int a;
	do
	{
		cout << "Press 1 for 1000000$" << endl;
		cout << "Press 2 for chocolate" << endl;
		cout << "Press 3 for BMW X5" << endl;
		cout << "Press 4 for 6 on DIS" << endl;
		cout << "Press 5 to exit" << endl;

		cin >> a;
		
	}
	while( a != 5 );

	system("pause");
}