#include<iostream>
using namespace std;

//iskame da proverim dali dadena tochka e vutre vuv venec,
//obrazuvan ot krug s radius 1 i ot krug s radius 10
//toest zonata izvun malkoto krugche i vutre v golemia krug
int main()
{
	int x,y,radius1 = 1, radius2 = 10;

	cout << "Enter x: ";
	cin >> x;

	cout << "Enter y: ";
	cin >> y;

	int expr = x*x+y*y;

	if( expr >= radius1*radius1 && expr <= radius2*radius2 )
	{
		cout << "Inside" << endl;
	}
	else
	{
		cout << "Outside" << endl;
	}
}