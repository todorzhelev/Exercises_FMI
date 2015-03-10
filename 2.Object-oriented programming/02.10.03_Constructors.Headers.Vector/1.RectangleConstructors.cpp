#include<iostream>

using namespace std;

enum Colors {Red,Green,Blue,Yellow};

class Rectangle
{
public:
	//default constructor. It doesn't have any parameters
	Rectangle()
	{
		cout << "Default constructor" << endl;

		m_width = 6;
		m_height = 3;
	}

	//constructor with parameters
	Rectangle(int width, int height)
	{
		cout << "Constructor with 2 parameteres" << endl;
		m_width = width;
		m_height = height;
	}

	////constructor using initialization list
	//Rectangle(int width, int height)
	//	:m_width(width), m_height(height)
	//{
		//cout << "Constructor with 2 parameteres and initialization list" << endl;
	//}

	////the default value of height is 4
	//Rectangle(int width, int height = 4)
	//{
	//	cout << "Constructor with default parameters" << endl;
	//	m_width = width;
	//	m_height = height;
	//}

	//we overload the constructor so we can pass the color too
	Rectangle(int width, int height, Colors color)
	{
		cout << "Constructor with 3 parameteres" << endl;
		m_width = width;
		m_height = height;
		m_color = color;
	}

private:
	int m_width, m_height;
	int m_area;
	Colors m_color;
};

int main()
{
	Rectangle rec(10,12,Colors::Blue);

	cin.get();
}