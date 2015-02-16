#include<iostream>

using namespace std;

//int GetSum(int arr[], int size) //mojem da napishem int arr[] vmesto int* arr
int GetSum(int* arr, int size)
{
	int sum = 0;
	for( int i = 0; i < size; i++ )
	{
		sum += arr[i];
	}

	return sum;
}

void SquareElements(int* arr, int size)
{
	for( int i = 0; i < size; i++ )
	{
		arr[i] *= arr[i];
	}
}

int main()
{
	int arr[5] = {66,666,12,5,4};
	
	int result = GetSum(arr,5);
	
	cout << result << endl;

	//iskame da namerim kvadratite na elementite na masiva prez funkcia
	SquareElements(arr,5);

	cout << "squared:" << endl;

	for( int i = 0; i < 5; i++ )
	{
		cout << arr[i] << " " << endl;
	}
}
