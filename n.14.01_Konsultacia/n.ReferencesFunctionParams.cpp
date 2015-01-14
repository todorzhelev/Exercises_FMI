#include<iostream>

using namespace std;

//izpolzvame ukazatel, za da vurnem rezultatut chrez parametur
void GetSumP(int* arr, int size, int* result)
{
	int sum = 0;

	for( int i = 0; i < size; i+=2 )
	{
		sum += arr[i];
	}

	*result = sum;
}

//izpolzvame psevdonim, za da vurnem rezultatut chrez parametur
void GetSum(int* arr, int size, int& result)
{
	int sum = 0;

	for( int i = 0; i < size; i+=2 )
	{
		sum += arr[i];
	}

	result = sum;
}

//chrez parametri vrushtame dva rezultata, koeto inache ne mojem da 
//postignem samo s return
void GetSums(int* arr, int size, int& resultEven, int& resultOdd)
{
	for( int i = 0; i < size; i++ )
	{
		if( i % 2 == 0 )
		{
			resultEven+=arr[i];
		}
		else
		{
			resultOdd+=arr[i];
		}
	}
}

int main()
{
	int arr[7] = {4,6,8,3,9,10,15};

	int result = 0;

	GetSum(arr,7,result);

	cout << "The result is " << result << endl;

	GetSumP(arr,7,&result);

	cout << "The result is " << result << endl;

	int resultEven = 0, resultOdd = 0;
	GetSums(arr,7,resultEven,resultOdd);
	cout << "Sum of elements with even indices " << resultEven << endl;
	cout << "Sum of elements with odd indices " << resultOdd << endl;
}
