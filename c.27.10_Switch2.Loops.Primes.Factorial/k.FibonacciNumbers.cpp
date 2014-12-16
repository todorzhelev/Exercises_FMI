#include<iostream>
using namespace std;

int main()
{
	//prints the first 10 Fibonacci numbers (without the 1,1)
	//every next Fibonacci number is sum of the previous two
	//1,1,2,3,5,8,13,21,34,55,89,144
	int a =1, b = 1;

	for( int i = 0; i <10; i++ )
	{
		int temp = a + b;
		a = b;
		b = temp;
		 
		cout << temp << " ";
	}

	system("pause");

}