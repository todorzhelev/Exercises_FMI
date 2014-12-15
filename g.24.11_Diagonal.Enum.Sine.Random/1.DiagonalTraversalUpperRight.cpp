#include<iostream>

using namespace std;

// we want to visit the elements of the array by diagonal, starting from the upper right element
int main()
{
	int mat[4][4] = {1,7,8,11,
			10,12,5,6,
			 4,3,66,9,
			15,100,17,99
			};


	//this loop will iterate over the elements at the first row - 11 8 7 1
	for( int i = 0, j = 3; j >=0; j-- )
	{
		//the inner loop will iterate over the elements by diagonal

		//we dont have to check if rol is < 4, because it will be always < 4
		//for( int row = i, col = j; row < 4 && col < 4; row++,col++ ) //regular version
		for( int row = i, col = j; col < 4; row++,col++ ) //better version
		{
			cout << mat[row][col] << " ";
		}

	}

	//this loop will iterate over the elements at the first column, except the upper left element(because it is already visited)
	for( int i = 1, j = 0; i < 4; i++ )
	{
		//the inner loop will iterate over the elements by diagonal

		//we dont have to check if col is < 4, because it will be always < 4
		//for( int row = i, col = j; row < 4 && col < 4; row++,col++ ) //regular version
		for( int row = i, col = j; row < 4; row++,col++ ) //better version
		{
			cout << mat[row][col] << " ";
		}
	}

	//the result must be 11 8 6 7 5 9 1 12 66 99 10 3 17 4 100 15

	system("pause");
}
