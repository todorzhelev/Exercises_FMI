#include<iostream>

using namespace std;

void GetArray(int* arr1,int* arr2, int* resultArr, int size)
{
	for( int i = 0; i < size; i++ )
	{
		int currentSum = 0;
		for( int j = 0; j < size; j++ )
		{
			currentSum += arr1[i]*arr2[j];
		}
		resultArr[i] = currentSum;
	}
}

int main()
{
	//dadeni sa dva masiva i iskame da populnim treti masiv - resultArr
	//purviat element na tozi masiv e suma na proizvedenieto na purvia element na arr1
	//s vseki element na arr2. Toest purviat element na resultArr triabva da e 2*4+2*6+2*9
	//vtoria element na resultArr triabva da e 3*4+3*6+3*9
	//tretiat element triabva da e 5*4+5*6+5*9

	int arr1[3] = {2,3,5};
	int arr2[3] = {4,6,9};
	int resultArr[3] = {};

	GetArray(arr1,arr2,resultArr,3);

	for( int i = 0; i < 3; i++ )
	{
		cout << resultArr[i] << " ";
	}
}
