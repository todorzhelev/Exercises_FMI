#include<iostream>
#include<vector>

using namespace std;

//pure virtual function is function, which has =0 at the end
//if class has atleast ONE pure virtual function we call that class abstract
//abstract class cannot have objects
//if we inherit abstract class and we dont override the pure virtual function, this class also becomes abstract
class Shape
{
public:
	virtual float GetArea() =0;
};

class Triangle : public Shape
{
public:
	Triangle(float a, float h)
	{
		m_a = a;
		m_h = h;
	}

	virtual float GetArea()
	{
		cout << "Triangle area: ";
		return m_a*m_h / 2;
	}
private:
	float m_a, m_h;
};

class Rectangle : public Shape
{
public:
	Rectangle(float a, float b)
	{
		m_a = a;
		m_b = b;
	}

	virtual float GetArea()
	{
		cout << "Rectangle area: ";
		return m_a*m_b;
	}
private:
	float m_a, m_b;
};

const float pi = 3.141592653589;

class Circle : public Shape
{
public:
	Circle(float radius)
	{
		m_radius = radius;
	}

	virtual float GetArea()
	{
		cout << "Circle area: ";
		return pi* m_radius*m_radius;
	}
private:
	float m_radius;
};

int main()
{
	//we cannot make object from abstract class
	//Shape shape;

	vector<Shape*> shapes;

	for (int i = 0; i < 4; i++)
	{
		Shape* shape = new Triangle(i, i * 2);
		shapes.push_back(shape);
	}

	for (int i = 0; i < 4; i++)
	{
		Shape* shape = new Rectangle(i, i * 3);
		shapes.push_back(shape);
	}

	for (int i = 0; i < 4; i++)
	{
		Shape* shape = new Circle(i * 5);
		shapes.push_back(shape);
	}

	for (int i = 0; i < shapes.size(); i++)
	{
		cout << shapes[i]->GetArea() << endl;
	}

	system("pause");
}