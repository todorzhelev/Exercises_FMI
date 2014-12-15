#include<iostream>
#include<string>

using namespace std;

//we want to pass two-dimensional array to function
//the size of the second dimension must be written - in this case 4
//other way is void GetSum(int arr[4][4],int size)
void GetSum(int arr[][4],int size)
{
	int sum = 0;
	for( int i = 0; i < size; i++ )
	{
		for( int j = 0; j < size; j++ )
		{
			sum += arr[i][j];
		}
	}

	cout << "the sum is " << sum << endl;
}

int main()
{
	const int size = 4;
	int mat[size][size] = { 5,6,7,8,
							9,10,11,12,
							13,14,15,16,
							17,18,19,20};

	GetSum(mat,size);

	system("pause");
}