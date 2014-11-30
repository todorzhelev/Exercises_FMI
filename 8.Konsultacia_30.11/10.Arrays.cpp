#include<iostream>
using namespace std;

int main()
{
	int arr[5];

	//elementite ne sa inicializirani i vsichko e s -858993460
	for( int i = 0; i < 5; i++ )
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	//////////////////////////////////////////////////////////////////////

	//inicializirame vsichki 4 elementa s 0
	int arr1[4] = {};

	for( int i = 0; i < 4; i++ )
	{
		cout << arr1[i] << " ";
	}

	cout << endl;

	//////////////////////////////////////////////////////////////////////

	const int size = 5;

	//izrichno inicializirame elementite
	int arr2[size] = {6,4,666,12,8};

	for ( int i = 0; i < size; i++ )
	{
		cout << arr2[i] << " ";
	}

	cout << endl;

	//////////////////////////////////////////////////////////////////////

	//inicializirame ot konzolata

	int arr3[size];

	for ( int i = 0; i < size; i++ )
	{
		cout << "Enter value: ";
		cin >> arr3[i];
	}

	for ( int i = 0; i < size; i++ )
	{
		cout << arr3[i] << " ";
	}

	cout << endl;

	//////////////////////////////////////////////////////////////////////

	int arr4[3] = {6,4,666};

	//tursim proizvedenieto na elementite na masiva arr4
	int result = 1;
	for( int i = 0; i < 3; i++ )
	{
		result *= arr4[i];
	}

	cout << "Proizvedenieto e " << result << endl;
}