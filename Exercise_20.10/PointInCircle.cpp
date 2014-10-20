#include<iostream>

using namespace std;


int main()
{
	//the circle's center is at the center of the coordinated system (0,0)
	//the equation of the circle is x^2 + y^2 = r^2
	//r is the radius of the circle
	int r = 5;

	int x, y;
	cout << "Enter point's x coordinate: ";
	cin >> x;
	cout << "Enter point's y coordinate: ";
	cin >> y;

	int var = x*x + y*y;

	if( var == r*r )
	{
		cout << "The point is at the circle" << endl;
	}
	else if( var > r*r )
	{
		cout << "The point is outside the circle" << endl;
	}
	else if( var < r*r )
	{
		cout << "The point is inside the circle" << endl;
	}

	
	////the circle's center is entered from the console
	////the equation of the circle is (x-cx)^2 + (y-cy)^2 = r^2 , where (cx,cy) is the center of the circle
	//int x, y;
	//cout << "Enter point's x coordinate: ";
	//cin >> x;
	//cout << "Enter point's y coordinate: ";
	//cin >> y;

	//int r, cx, cy;
	//cout << "Enter the radius of the circle: ";
	//cin >> r;
	//cout << "Enter the x coordinate of the circle's center: ";
	//cin >> cx;
	//cout << "Enter the y coordinate of the circle's center: ";
	//cin >> cy;

	//int var = (x-cx)*(x-cx) + (y-cy)*(y-cy);

	//if( var == r*r )
	//{
	//	cout << "The point is at the circle" << endl;
	//}
	//else if( var > r*r )
	//{
	//	cout << "The point is outside the circle" << endl;
	//}
	//else if( var < r*r )
	//{
	//	cout << "The point is inside the circle" << endl;
	//}



	system("pause");

	return 0;
}