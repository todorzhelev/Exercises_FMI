#include<iostream>
using namespace std;

int main()
{
	// We want to reverse the array. {5,8,10,6,7,3} should become {3,7,6,10,8,5}
	// The code is wrong and must be debugged

	const int size = 6;

	int arr[size] = {5,8,10,6,7,3};

	// we are using index which is outside the array
	cout << "shestiat element e: " << arr[size] << endl;

	for( int i = 0; i < size; i++ )
	{
		//this code is wrong, but if we make 
		//separate variable for the complicated index we can debug it easier
		//for instance int index = size - i; and we substitute size - i with index

		int temp = arr[i];
		arr[i] = arr[size - i];
		arr[size - i] = temp;
	}

	// with size-1 we will skip to print the last element
	for( int i = 0; i < size-1; i++ )
	{
		cout << arr[i] << " ";
	}

	system("pause");

	return 0;

}