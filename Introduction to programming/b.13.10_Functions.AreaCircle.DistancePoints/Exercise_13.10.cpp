#include<iostream>
#include<cmath>

using namespace std;

void PrintSquare()
{
	int a;
	cout << "Enter value: ";
	cin >> a;

	cout << "-----------------" << endl;
	cout << "Square is: " << a*a << endl;
	cout << "-----------------" << endl;
}

//with const we cannot change the variable value after the initialization
const float pi = 3.14159265;

float GetCircleArea(int radius)
{
	float area = pi * radius * radius;

	return area;
}

float GetDistance(int x1, int y1, int x2, int y2)
{
	int dx = x1 - x2;
	int dy = y1 - y2;

	float distance = sqrt(dx*dx + dy*dy);

	return distance;
}


int main()
{
	//Uncomment the code that you need by selecting it and then pressing Ctrl-K/Ctrl-U 
	//or by selecting it and go to Edit -> Advanced -> Uncomment selection

	////var and Var are two different variables
	/*int var = 6;
	int Var = 7;
	cout << var << " " << Var << endl;*/

	////we must cast c to float in order to get float as result and not whole number
	/*int b = 6, c = 7;
	float a = b / (float)c;
	cout << a << endl;*/

	////we can cast char to int to get the ascii code of the symbol
	/*char var = '$';
	cout << static_cast<int>(var) << endl;*/

	////we can cast int to char to get the symbol representing this number in the 
	////ascii table
	/*int var = 100;
	cout << static_cast<char>(var) << endl;*/

	////% gets the remainder of the division
	/*int a = 8000, b = 7;
	cout << a%b << endl;*/

	/*PrintSquare();
	PrintSquare();
	PrintSquare();*/

	////finds the area of a circle with radius 100
	//float area = GetCircleArea(100);
	//cout << area << endl;

	//we are looking for the distance between the points with coordinates (1,1) and (5,3)
	cout << GetDistance(1,1,5,3) << endl;

	system("pause");

	return 0;

}
