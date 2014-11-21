#include<iostream>

using namespace std;

int main()
{
	int arr[4][4] = { {1,7,8,-5},
			  {6,5,4,7},
			  {2,15,6,12},
			  {-100,12,700,6}
			};

	// 1. At the main diagonal
	//	when we want to do something at the main diagonal this happens when i == j

	// 2. Above main diagonal
	//	when we want to do something above the main diagonal this happens when j > i

	// 3. Below main diagonal
	//	when we want to do something below the main diagonal this happens when i > j

	//The clearly see this write the matrix on paper and the indices for rows and cols:
	/*							
						      0   1   2  3   - indices for the column (j)
			index for first row	0     1   7   8  -5
			index for second row	1     6   5   4  7
			index for third row	2     2   15  6  12
			index for fourth row	3   -100 12 700  6
					       (i)												*/

	//we want to find the sum of the elements above the main diagonal of the matrix
	int sum = 0;

	for( int i = 0; i < 4; i++ )
	{
		for( int j = 0; j < 4; j++ )
		{
			if( j > i )
			{
				sum += arr[i][j];
			}
		}
	}

	cout << "The sum of the elements above the main diagonal is: " << sum << endl;

	////////////////////////////////////////////////////////////////////////////////////////

	//we want to find the max element below the main diagonal

	/*int max = arr[1][0]; //we initialize max with one of the elements below the main diagonal

	for( int i = 0; i < 4; i++ )
	{
		for( int j = 0; j < 4; j++ )
		{
			if( i > j )
			{
				if( arr[i][j] > max )
				{
					max = arr[i][j];
				}
			}
		}
	}

	cout << "The max element below the main diagonal is: " << max << endl;*/


	system("pause");
}
