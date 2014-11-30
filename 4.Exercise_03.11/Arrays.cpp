#include<iostream>
using namespace std;


int main()
{
	//// The arrays is consequence of elements - int arr[5] means that we have 5 elements of type int
	//// The elements of the array are placed consequently in the memory
	//// We can access the elements by indexes, which start from 0
	//// arr[0] will return the value of the first element
	//// arr[1] will return the value of the second element and so on.

	///////////////////////////////////////////////////////////////////////////

	//Array initialization

	//// initializes all 5 elements with 0
	//int arr[5] = {};

	//for( int i = 0; i < 5; i++ )
	//{
	//	cout << arr[i] << endl;
	//}

	//// initializes first three elements with 1 , 66 and 7 and the next ones are set to 0
	//// arr[0] is 1, arr[1] is 66, arr[2] is 7, arr[3] is 0, arr[4] is 0
	//int arr[5] = {1,66,7};

	//for( int i = 0; i < 5; i++ )
	//{
	//	cout << arr[i] << endl;
	//}

	//// initialize from the console
	//int arr[5];

	//for( int i = 0; i < 5; i++ )
	//{
	//	cout << "Enter value for " << i << " element: ";
	//	cin >> arr[i];
	//}

	///////////////////////////////////////////////////////////////////////////

	//Accessing not-initialized elements

	//int arr[10]; // the elements in the array are not initialized
	//			 // they will receive undefined values, usually -858993460

	//cout << arr[0] << endl;

	///////////////////////////////////////////////////////////////////////////

	//// We search for element in the array 

	/*int number;
	cin >> number;

	bool bIsFound = false;

	int arr[5] = {1,2,45,6,7};

	for( int i = 0; i < 5; i++ )
	{
		if( number == arr[i] )
		{
			bIsFound = true;
			break;
		}
	}

	if( bIsFound )
	{
		cout << "the number is found" << endl;
	}
	else
	{
		cout << "the number is not found" << endl;
	}*/

	///////////////////////////////////////////////////////////////////////////

	//// We want to find the max element in the array

	//int arr[5] = {1,2,45,6,7};

	//int max = arr[0];

	//for( int i = 0; i < 5; i++ )
	//{
	//	if( arr[i] > max )
	//	{
	//		max = arr[i];
	//	}
	//}

	//cout << max << endl;

	///////////////////////////////////////////////////////////////////////////

	// We want to find the minimum element in the array

	//int arr[5] = {400,2,45,6,7};

	//int min = arr[0];

	//for( int i = 0; i < 5; i++ )
	//{
	//	if( arr[i] < min )
	//	{
	//		min = arr[i];
	//	}
	//}

	//cout << min << endl;

	///////////////////////////////////////////////////////////////////////////

	//// We want to find the mean of the elements in the array

	////// we can use ONLY const variable to store the size of the array
	//const int size = 5;

	//int arr[size] = {16,2,45,6,7};

	//float sum = 0;

	//for( int i = 0; i < size; i++ )
	//{
	//	sum += arr[i];
	//}

	////we divide the sum of the elements on the size of the array to find the mean
	//cout << sum/size << endl;

	///////////////////////////////////////////////////////////////////////////

	//// We want to reverse the array. {5,8,10,6,7,3} should become {3,7,6,10,8,5}
	
	//const int size = 6;

	//int arr[size] = {5,8,10,6,7,3};

	//// we will make totally size/2 iterations to reverse the array
	//for( int i = 0; i < size/2; i++ )
	//{
	//	// imagine that i is 0, then size-i-1 = 5
	//	// so we swap arr[0] and arr[5], in our case arr[0] is 5 and arr[5] is 3

	//	int temp = arr[i];
	//	arr[i] = arr[size-i-1];
	//	arr[size-i-1] = temp;
	//}

	//for( int i = 0; i < size; i++ )
	//{
	//	cout << arr[i] << " ";
	//}


	system("pause");

	return 0;

}