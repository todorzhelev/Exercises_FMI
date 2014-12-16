#include<iostream>
using namespace std;

//presmiata dvoen faktoriel ot number
//ne ni interesuva dali chisloto e chetno ili ne
int main()
{
	int number = 6;

	int result = 1;

	while( number > 1 )
	{
		result *= number;
		number -=2;
	}

	cout << result << endl;
}