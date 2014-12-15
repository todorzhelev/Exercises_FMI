#include<iostream>
using namespace std;

//iskame da proverim dali dadena tochka e vutre,izvun ili na krug s centur (0,0)
//i radius, koito se vuvejda ot konzolata
int main()
{
	int x,y,radius;

	cout << "Enter the radius of the circle: ";
	cin >> radius;

	cout << "Enter x: ";
	cin >> x;

	cout << "Enter y: ";
	cin >> y;

	int expr = x*x+y*y;

	if( expr < radius*radius )
	{
		cout << "Inside the circle" << endl;
	}
	else if( expr > radius*radius )
	{
		cout << "Outside the circle" << endl;
	}
	else if( expr == radius*radius )
	{
		cout << "At the circle" << endl;
	}
}