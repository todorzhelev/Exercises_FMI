#include<iostream>
using namespace std;

//vurtim cikul dokato ne vuvedem chislo v ukazania interval - [0,100]
int main()
{
	int number;

	do
	{
		cout << "Enter number in the range [0,100]: ";
		cin >> number;
	}
	while( number < 0 || number > 100 );

	cout << number << endl;
}