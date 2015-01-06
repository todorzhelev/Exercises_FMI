#include<iostream>

using namespace std;

//error. Default parameters should be written
//from right to left
//int Add( int a = 65, int b)

int Add( int a, int b = 650)
{
	return a+b;
}

int main()
{
	//outputs 12
	cout << Add(5,7) << endl;

	//outputs 655
	cout << Add(5) << endl;
	

	system("pause");
}