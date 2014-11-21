#include<iostream>

using namespace std;

int main()
{
	//The analog of two-dimensional arrays in mathematics are matrices

	//first way to initialize two-dimensional arrays
	int arr[3][3] = { 1,7,8,
					  6,5,4,
					  2,15,6 };

	//second way to initialize two-dimensional arrays
	int arr1[3][3] = { {1,7,8},
					  {6,5,4},
					  {2,15,6} };

	//we need nested loops the initialize the array.
	
	//Think that i is for the rows of the matrix and j is for the columns of the matrix
	for( int i = 0; i < 3; i++ )
	{
		for( int j = 0; j < 3; j++ )
		{
			cout << arr1[i][j] << " ";
		}

		cout << endl;
	}

	//to understand how the nested loop works look at the thing below or 
	//even better - debug the code
	/*
		// for each i we perform the whole nested loop
		i = 0
			j = 0
			j = 1
			j = 2
		i = 1
			j = 0
			j = 1
			j = 2
		i = 2
			j = 0
			j = 1
			j = 2
	*/

	system("pause");
}