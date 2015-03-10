#include<iostream>
using namespace std;

class MyClass
{
public:
	MyClass(int a)
	{
		m_a = a;
	}

	int m_a;
private:
	int m_c;
};

struct MyStruct
{
	int m_b;
};

int main()
{
	MyStruct obj1;
	obj1.m_b = 100;

	cout << obj1.m_b;

	MyClass obj2(10);
	cout << obj2.m_a;


	system("pause");
}