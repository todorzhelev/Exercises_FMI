#include<iostream>

using namespace std;

//we want to check if number is power of 2
//64 is power of 2, 66 is not
bool IsPowerOf2(int number)
{
	if( number == 1 )
	{
		return true;
	}

	if( number%2 != 0 )
	{
		return false;
	}

	return IsPowerOf2(number/2);
}

int main()
{
	int number = 48;

	bool isPowOf2 = IsPowerOf2(number);

	if( isPowOf2 )
	{
		cout << number << " is power of 2" << endl;
	}
	else
	{
		cout << number << " is not power of 2" << endl;
	}

	system("pause");
}


