#include<iostream>

using namespace std;

// when we pass array as parameter we can write int arr[] or int* arr
// also we have to pass the size of the array, because we dont know 
// what is the size of the array
void ModifyElements(int arr[],int size);

int main()
{	
	const int size = 3;

	int arr[size] = {6,9,12};

	//to pass the array to the function we just write the name of the array

	//dont forget that the name of the array is pointer to the first element of the array
	//this means that this pointer will contain the address of the first element
	//when we pass the array as parameter the pointer is copied 
	//and inside the function we work with copy of this pointer, BUT the content of the pointer
	//is the same - the address of the first element
	//because of this we can change the values of the array
	ModifyElements(arr,size);

	for( int i = 0; i < size; i++ )
	{
		cout << "The value is: " << arr[i] << endl;
	}

	system("pause");
}

void ModifyElements(int* arr,int size)
{
	for( int i = 0; i < size; i++ )
	{
		arr[i] += 2;
	}
}
