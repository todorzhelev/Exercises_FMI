#include<iostream>

using namespace std;

int main()
{
	// the elements of array are stored consequently in the memory
	int arr[3] = {5,6,100};

	// the name of the array is pointer to the first element of the array
	cout << arr << endl;

	// the elements are stored in the memory, so they have addresses
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;

	// because the name of the array is pointer to the first element
	// we can get the value of the first element via the pointer
	cout << *arr << endl;


	/////////////////////////////////////////////////////////////////////////////////////////

	//// the main problem of the static arrays is that their size is fixed
	//// and it cannot be changed
	//// if we want the size not to be fixed we must allocate memory from the heap
	//// with the size we want
	//// this can happen with pointers and the operator new

	//int size;
	//cout << "enter size of the array: " << endl;
	//cin >> size;

	//// the format is new type[amount]. 
	//// This allocates memory in the heap for amount elements of the specified type
	//// After the memory is allocated the address of the first element in the array is returned

	//// for instance new int[10] allocates memory for 10 elements of type int.
	//// this is 10 * 4KB = 40 KB allocated memory in the heap

	//// because address is returned, we use pointer to store it

	//int* arr = new int[size];

	//for( int i = 0 ; i < size; i++ )
	//{
	//	cout << "enter value: ";

		//// there is big resemblance between the arrays and pointers
		//// if we allocate memory for certain elements, we can use the pointer as array
		//// i.e. we can use [] to index the elements

	//	cin >> arr[i];
	//}

	//for( int i = 0 ; i < size; i++ )
	//{
	//	cout << arr[i] << endl;
	//}

	/////////////////////////////////////////////////////////////////////////////////////////

	//// because the name of the array is pointer to the first element
	//// and the elements of the array are consequently in the memory
	//// we can get the different elements by modifying the value of the pointer

	//int arr[3] = {5,6,100};

	//// next 3 lines of code are doing the same thing

	//// arr[1] is translated to *(arr+1)
	//cout << arr[1] << endl;

	//cout << *(arr+1) << endl; 

	//// 1[arr] is translated to *(1+arr)
	//cout << 1[arr] << endl;


	/////////////////////////////////////////////////////////////////////////////////////////

	//// We create memory leak. We allocate memory in the heap, but after the loop we
	//// cannot access the allocated memory, because arr is local variable for the loop
	//// and it is not accessible after the end of the loop

	/*while( true )
	{
		int* arr = new int[40000];
	}*/



	system("pause");

}