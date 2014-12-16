#include<iostream>
using namespace std;

int main()
{
	float a = 0.0003678;
	float b = 0.0003679;

	//WRONG way to test if two real numbers are equal
	//a and b are extremely close and they can be considered equal
	//but they are different in one digit, so this check will fail
	if( a == b )
	{
		cout << "ravni sa" << endl;
	}
	else
	{
		cout << "ne sa ravni" << endl;
	}

	//CORRECT way to test if two real numbers are equal
	//we are infact checking how close on the real axis are the two real numbers
	//if they are close enough we say they are equal
	float epsilon = 0.000001;

	if( abs(a-b) < epsilon )
	{
		cout << "ravni sa" << endl;
	}
	else
	{
		cout << "ne sa ravni" << endl;
	}

	system("pause");
}