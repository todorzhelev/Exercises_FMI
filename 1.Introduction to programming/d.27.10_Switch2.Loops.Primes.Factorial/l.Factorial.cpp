#include<iostream>
using namespace std;

int main()
{
	// finds n! by multiplying n*(n-1)*(n-2)*...3*2*1
	/*int n;

	cin >> n;
	int result = 1;

	for( int i = n; i > 0; i-- )
	{
		result *=i;
	}

	cout << result << endl;*/

	// finds n! by multiplying 1*2*3*...*n
	int n;
	cin >> n;

	int result = 1;
	for( int i = 1; i <= n; i++ )
	{
		result *=i;
	}

	cout << result << endl;


	system("pause");
}