#include<iostream>
using namespace std;

//we want to calculate the following expression: (1)(1+2)(1+2+3)(1+2+3+4)...(1+2+3+4+..+n)
//for n=4 the result must be 180, for n=5 - 2700
int main()
{
	//without nested loop
	int n = 5;

	float result = 1;
	int sum = 0;

	for( int i = 1; i <=n; i++ )
	{
		sum += i;
		result *= sum;
	}

	cout << result << endl;

	//with nested loop
	/*int n = 4;

	float result = 1;

	for( int i = 1; i <=n; i++ )
	{
		int currentSum = 0;
		for( int k = 1; k <= i; k++ )
		{
			currentSum += k;
		}

		result *= currentSum;
	}

	cout << result << endl;*/

	system("pause");
}