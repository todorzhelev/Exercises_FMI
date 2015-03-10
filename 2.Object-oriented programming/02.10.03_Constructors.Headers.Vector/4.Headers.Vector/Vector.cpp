#include<iostream>
#include<vector>
#include"Rectangle.h"

using namespace std;

int main()
{
	//initialize the vector. Available from VS2013
	vector<int> arr{ 5, 8, 12, 3 };

	//sets the size of the arr2 to be 10
	vector<int> arr2(10);

	vector<int> arr3;
	//if we dont set the size of the array
	//we cant index it. arr3 is empty and
	//we cannot write arr3[0]
	//arr3[0] = 12;

	//push_back automatically increases the size of the array
	vector<int> arr4;
	arr4.push_back(10);
	arr4.push_back(2);
	arr4.push_back(3);
	arr4.push_back(5);

	//removes the last element of the array
	//and lowers the size by 1
	arr4.pop_back();
	
	//back() returns the last element of the array
	cout << arr4.back() << endl;

	Rectangle rec1, rec2, rec3;

	vector<Rectangle> rectangles(3);
	rectangles[0] = rec1;
	rectangles[1] = rec2;
	rectangles[2] = rec3;

	for (int i = 0; i < rectangles.size(); i++)
	{
		cout << rectangles[i].GetArea() << endl;
	}

	system("pause");
}