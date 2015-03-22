#include<iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle rec(5, 5);

	cout << rec.GetPerimeter() << endl;

	system("pause");
}