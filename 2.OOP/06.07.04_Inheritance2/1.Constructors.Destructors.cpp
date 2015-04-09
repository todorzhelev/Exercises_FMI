#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal: default constructor" << endl;
		m_name = "random name";
		m_age = 0;
	}

	Animal(string name, int age)
	{
		cout << "Animal: normal constructor" << endl;
		m_name = name;
		m_age = age;
	}

	~Animal()
	{
		cout << "Animal destructor" << endl;
	}
private:
	string m_name;
	int m_age;

};

class Cat : public Animal
{
public:
	Cat()
	{
		cout << "Cat: default constructor" << endl;
		m_attackDamage = 15;
	}

	Cat(string name, int age, int attackDamage) : Animal(name,age)
	{
		cout << "Cat: normal constructor" << endl;
		m_attackDamage = attackDamage;
	}

	~Cat()
	{
		cout << "Cat destructor" << endl;
	}

private:
	int m_attackDamage;
};

class DomesticCat : public Cat
{
public:
	DomesticCat()
	{
		cout << "DomesticCat: default constructor" << endl;
	}

	DomesticCat(string name, int age, int attackDamage) : Cat(name, age,attackDamage)
	{
		cout << "DomesticCat: normal constructor" << endl;
	}

	~DomesticCat()
	{
		cout << "DomesticCat destructor" << endl;
	}
};
int main()
{
	cout << "Cat1: " << endl;
	//calls Animal normal constructor, then Cat normal constructor
	Cat cat1("Kotka", 4, 50);
	
	cout << endl << "Cat2: " << endl;
	//calls Animal normal constructor, then Cat normal constructor
	//then DomesticCat normal constructor
	DomesticCat cat2("Puh4o", 5, 10);

	cout << endl << "Cat3: " << endl;

	DomesticCat* cat3 = new DomesticCat("Puh4o", 5, 10);

	//calls DomesticCat destructor first, then Cat destructor
	//then Animal destructor
	delete cat3;

	system("pause");
}