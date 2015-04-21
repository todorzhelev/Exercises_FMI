#include<iostream>
#include<vector>
using namespace std;

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
	/*virtual void Walk()
	{
		cout << "Human walking" << endl;
	}*/
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
	Animal* animal = new Human;
	animal->Walk();


	system("pause");
}