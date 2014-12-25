#include<iostream>
using namespace std;

//iskame da proverim v koi kvadrant e dadena tochka
int main()
{
	int x,y;
	cout << "Enter x: ";
	cin >> x;

	cout << "Enter y: ";
	cin >> y;

	if( x > 0 && y > 0 )
	{
		cout << "First quadrant" << endl;
	}
	else if( x < 0 && y > 0 )
	{
		cout << "Second quadrant" << endl;
	}
	else if( x < 0 && y < 0 )
	{
		cout << "Third quadrant" << endl;
	}
	else if( x > 0 && y < 0 )
	{
		cout << "Fourth quadrant" << endl;
	}
	else if( x == 0 && y == 0 )
	{
		cout << "At center" << endl;
	}
	else if( x == 0 && y != 0 )
	{
		cout << "At Oy" << endl;
	}
	else if( x != 0 && y == 0 )
	{
		cout << "At Ox" << endl;
	}
}