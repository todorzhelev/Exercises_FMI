#include<iostream>
using namespace std;


int main()
{
	// We want to reverse the array. {5,8,10,6,7,3} should become {3,7,6,10,8,5}
	
	const int size = 6;

	int arr[size] = {5,8,10,6,7,3};

	cout << "shestiat element e: " << arr[size] << endl;

	for( int i = 0; i < size; i++ )
	{
		int temp = arr[i];
		arr[i] = arr[size-i];
		arr[size-i] = temp;
	}

	for( int i = 0; i < size-1; i++ )
	{
		cout << arr[i] << " ";
	}


	system("pause");

	return 0;

}