#include<iostream>
#include<cmath>
#include<string>
using namespace std;

const float pi = 3.141592653589;

double ConvertToDegrees(double radians)
{
	return 180 * radians / pi;
}

double ConvertToRadians(double degree)
{
	return degree*pi/180;
}

class Point
{
public:
	Point()
	{
		m_x = 0;
		m_y = 0;
		m_name = "";
	}

	Point(double x, double y,char* name)
	{
		m_name = name;
		m_x = x;
		m_y = y;
	}

	Point(const Point& p)
	{
		m_name = p.m_name;
		m_x = p.m_x;
		m_y = p.m_y;
	}

	~Point()
	{
	}

	double GetX()
	{
		return m_x;
	}

	double GetY()
	{
		return m_y;
	}

	void SetX(double x)
	{
		m_x = x;
	}

	void SetY(double y)
	{
		m_y = y;
	}

	double GetRadius()
	{
		return sqrt(m_x*m_x + m_y*m_y);
	}

	double GetAngle() 
	{
		double angle = atan2(m_y, m_x);
		return angle;
	}

	double GetDistance(const Point& p2)
	{
		double dx = p2.m_x - m_x;
		double dy = p2.m_y - m_y;
		return sqrt(dx*dx + dy*dy);
	}

	Point& operator=(const Point& p)
	{
		if (this != &p)
		{
			m_name = p.m_name;
			m_x = p.m_x;
			m_y = p.m_y;
		}

		return *this;
	}

	friend ostream& operator<<(ostream& stream, Point& p);
	friend istream& operator>>(istream& stream, Point& p);

private:

	string m_name;
	double m_x, m_y;
};

ostream& operator<<(ostream& stream, Point& p)
{
	stream << p.m_name << ": (" << p.GetRadius() << "," << ConvertToDegrees(p.GetAngle()) << ")" << endl;

	return stream;
}

istream& operator>>(istream& stream, Point& p)
{
	stream >> p.m_name >> p.m_x >> p.m_y;

	return stream;
}

int main()
{
	Point p(2, 3,"p");
	Point p2(4, 7, "p2");

	cout << p << endl;

	cout << p.GetDistance(p2) << endl;

	Point p3(p); //copy constructor
	Point p4 = p2; //copy constructor

	p2 = p; //operator=

	cout << p2 << endl;

	Point p5;
	cin >> p5;
	cout << p5;

	system("pause");
}