#include<iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "Enter x coordinate: ";
	cin >> x;

	cout << "Enter y coordinate: ";
	cin >> y;

	if( x == 0 && y == 0 )
	{
		cout << "Center of the coordinate system" << endl;
	}
	else if( x == 0 && y != 0 )
	{
		cout << "At Oy" << endl;
	}
	else if( y == 0 && x != 0 )
	{
		cout << "At Ox" << endl;
	}
	else if( x > 0 && y > 0 )
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

	system("pause");

	return 0;
}