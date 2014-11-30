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


	for( int i = 0, j = 3; j >=0; j-- )
	{
		//for( int k = i, l = j; k < 4 && l < 4; k++,l++ ) //regular version
		for( int k = i, l = j; l < 4; k++,l++ ) //better version
		{
			cout << mat[k][l] << " ";
		}

	}

	for( int i = 1, j = 0; i < 4; i++ )
	{
		//for( int k = i, l = j; k < 4 && l < 4; k++,l++ ) //regular version
		for( int k = i, l = j; k < 4; k++,l++ ) //better version
		{
			cout << mat[k][l] << " ";
		}
	}

	//the result must be 11 8 6 7 5 9 1 12 66 99 10 3 17 4 100 15

	system("pause");
}