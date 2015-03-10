#include<iostream>

using namespace std;

enum Colors { Red, Green, Blue, Yellow };

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

	Rectangle(int width, int height)
	{
		cout << "Constructor with 2 parameteres" << endl;

		m_width = width;
		m_height = height;
	}

	//it can be also Rectangle& rec.
	//the const prevents the copied object to be modified
	Rectangle(const Rectangle& rec)
	{
		cout << "Copy constructor" << endl;

		m_width = rec.m_width;
		m_height = rec.m_height;
		m_area = rec.m_area;
		m_color = rec.m_color;
	}

	int GetArea()
	{
		return m_width*m_height;
	}

private:
	int m_width, m_height;
	int m_area;
	Colors m_color;
};

void Func(Rectangle rec)
{
	cout << rec.GetArea() << endl;
}

Rectangle Func2()
{
	Rectangle rec;

	return rec;
}

int main()
{
	Rectangle rec(5,7); //here is called the constructor with 2 parameters

	//we initialize newly created object with another object, so the copy constructor is called
	Rectangle rec1 = rec; 

	//rec1 is passed by copy and inside the functions is created copy of rec1.
	//Thats why copy constructor is invoked
	Func(rec1); 

	rec1 = Func2();
	//Func2 returns Rectangle by copy so copy constructor is called
	cout << rec1.GetArea() << endl;


	cin.get();
}