#include<iostream>
#include<vector>
using namespace std;

//�� ����� ����, � ����� ��� ���� 1 ��������� ������� �� ������� ��������� ������� (vtable), ����� � ���� �� ���� ����
//��� ����������� ������� ��� ��������� ��� ����������� ������� �� ���� ����
//��� ����� ���� ��������� ���� ����, � ����� ��� ��������� �������, � ���������� ���� �������� ��������� ��������� �������
//��� ����� ����� �� ����, �� ����� ��� ��������� �������, �� ������ ������ ���� ���������� __vfptr - �������� ��� ����������� ������� �� �����
class Animal
{
public:
	virtual void Sleep()
	{
		cout << "Animal sleeping" << endl;
	}

	virtual void Eat()
	{
		cout << "Animal eating" << endl;
	}

	virtual void Walk()
	{
		cout << "Animal walking" << endl;
	}

	void Run()
	{
		cout << "Animal running" << endl;
	}
};

class Human : public Animal
{
public:
	virtual void Walk()
	{
		cout << "Human walking" << endl;
	}
};

class God : public Human
{
public:
	virtual void Sleep()
	{
		cout << "God sleeping" << endl;
	}

	virtual void Destroy()
	{
		cout << "Destroying" << endl;
	}
};

int main()
{
	//���� �� ��������� breakpoint-�, �� �� ������ ����������� ������� �� Human, Animal � God
	//(������ debug-���� �������� � ������� ��� human � �������� ���������, � ����, ����� �� �������)
	Human human;
	Animal* animal = &human;
	animal->Walk();

	God god;


	system("pause");
}