#include<iostream>
using namespace std;

int main()
{
	int mat[4][4] = {4,12,8,6,
			3,1,5,9,
			14,17,16,-20,
			21,19,100,666
			};


	//sumata na elementite po glavnia diagonal
	int sumMainDiagonal = 0;
	for( int i = 0; i < 4; i++)
	{
		for( int j = 0; j < 4; j++ )
		{
			if( i == j )
			{
				sumMainDiagonal+= mat[i][j];
			}
		}
	}

	cout << "The sum of the elements on the main diagonal is: " << sumMainDiagonal << endl;

	/////////////////////////////////////////////////////////////////////////////////

	//maksimalnoto chislo pod glavnia diagonal
	int maxNumber = mat[1][0];
	for( int i = 0; i < 4; i++)
	{
		for( int j = 0; j < 4; j++ )
		{
			if( i > j && mat[i][j] > maxNumber)
			{
				maxNumber = mat[i][j];
			}
		}
	}

	cout << "Max number below the main diagonal: " << maxNumber << endl;

	/////////////////////////////////////////////////////////////////////////////////

	//minimalnoto chislo nad glavnia diagonal
	int minNumber = mat[0][1];
	for( int i = 0; i < 4; i++)
	{
		for( int j = 0; j < 4; j++ )
		{
			if( j > i && mat[i][j] < minNumber)
			{
				minNumber = mat[i][j];
			}
		}
	}

	cout << "Min number above the main diagonal: " << minNumber << endl;

	/////////////////////////////////////////////////////////////////////////////////

	//sumata na elementite po vtorichnia diagonal
	int sumSecondaryDiagonal = 0;
	for( int i = 0; i < 4; i++)
	{
		for( int j = 0; j < 4; j++ )
		{
			if( i+j == 3 )
			{
				sumSecondaryDiagonal+= mat[i][j];
			}
		}
	}

	cout << "The sum of the elements on the secondary diagonal is: " << sumSecondaryDiagonal << endl;

	/////////////////////////////////////////////////////////////////////////////////

	//sumata na elementite pod vtorichnia diagonal
	int sumBelowSecondaryDiagonal = 0;
	for( int i = 0; i < 4; i++)
	{
		for( int j = 0; j < 4; j++ )
		{
			if( i+j > 3 )
			{
				sumBelowSecondaryDiagonal+= mat[i][j];
			}
		}
	}

	cout << "The sum of the elements below the secondary diagonal is: " << sumBelowSecondaryDiagonal << endl;

	/////////////////////////////////////////////////////////////////////////////////

	//sumata na elementite nad vtorichnia diagonal
	int sumAboveSecondaryDiagonal = 0;
	for( int i = 0; i < 4; i++)
	{
		for( int j = 0; j < 4; j++ )
		{
			if( i+j < 3 )
			{
				sumAboveSecondaryDiagonal+= mat[i][j];
			}
		}
	}

	cout << "The sum of the elements above the secondary diagonal is: " << sumAboveSecondaryDiagonal << endl;
}
