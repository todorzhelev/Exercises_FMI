#include<iostream>

using namespace std;

const float pi = 3.141592653589;

class Circle
{
public:
	Circle()
	{
		m_cx = 0;
		m_cy = 0;
		m_radius = 5;
	}

	Circle(int radius)
	{
		m_cx = m_cy = 0;
		m_radius = radius;
	}

	Circle(int cx, int cy, int radius)
	{
		m_cx = cx;
		m_cy = cy;
		m_radius = radius;
	}

	~Circle()
	{
		cout << "Circle destructor" << endl;
	}

	float GetArea()
	{
		return pi * m_radius* m_radius;
	}

	int GetCircumference()
	{
		return 2 * pi *m_radius;
	}

private:
	int m_radius;
	int m_cx, m_cy;
};

int main()
{
	//1.pointers to objects
	Circle circle1;

	int area = circle1.GetArea();

	cout << area << endl;

	Circle* pCircle = &circle1;
	//when we have pointer, functions and variables are accessed by ->, not by .
	int circumference = pCircle->GetCircumference(); //same as (*pCircle).GetCircumference();

	cout << circumference << endl;

	///////////////////////////////////////////////////////////////////////////////////////

	//2.Allocating memory for one object
	Circle* pCircle1 = nullptr;
	int n;
	cout << "Enter number: ";
	cin >> n;

	//we allocate memory for one Circle only if n > 10
	if (n > 10)
	{
		pCircle1 = new Circle; //the default constructor is invoked here
	}

	if (pCircle1 != nullptr)
	{
		cout << pCircle1->GetArea() << endl;
	}

	////////////////////////////////////////////////////////////////////////////////////

	//3.Array of objects

	int size;
	cout << "Enter size";
	cin >> size;

	Circle* arr1 = new Circle[size]; //at this line it calls the default constructor for each of the circles
	for (int i = 0; i < size; i++)
	{
		cout << arr1[i].GetArea() << endl;
	}

	//////////////////////////////////////////////////////////////////////////////////////

	//4. Destructor

	//4.1. Calling destructor when out of scope
	int c;
	cout << "Enter number ";
	cin >> c;

	if (c > 2)
	{
		Circle circle1(3);
		cout << circle1.GetArea() << endl;

	}//destructor of circle1 is called here, because it is local variable for the if

	//4.2. deleting single object
	Circle* circle5 = new Circle(6);

	cout << circle5->GetCircumference() << endl;

	delete circle5;

	//this will give wrong result as circle5 is deleted
	int area1 = circle5->GetArea();

	//4.3. deleting array of objects
	int size2;
	cout << "Enter size";
	cin >> size2;
	Circle* arr2 = new Circle[size2];

	for (int i = 0; i < size2; i++)
	{
		cout << arr2[i].GetArea() << endl;
	}

	delete[] arr2;

	//this will give wrong results
	for (int i = 0; i < size2; i++)
	{
		cout << arr2[i].GetArea() << endl;
	}


	system("pause");
}