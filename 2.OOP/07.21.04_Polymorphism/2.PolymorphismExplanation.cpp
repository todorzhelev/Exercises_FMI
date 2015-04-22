#include<iostream>
#include<vector>
using namespace std;

//за всеки клас, в който има поне 1 виртуална функция се създава виртуална таблица (vtable), която е една за този клас
//във виртуалната таблица има указатели към виртуалните функции за този клас
//ако даден клас наследява друг клас, в който има виртуални функции, и наследения клас получава собствена виртуална таблица
//към всеки обект от клас, за който има виртуална таблица, се добавя скрита член променлива __vfptr - указател към виртуалната таблица на класа
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
	//може да използват breakpoint-и, за да видите виртуалните таблици на Human, Animal и God
	//(докато debug-вате минавата с мишката над human и следвате стрелките, в това, което се появява)
	Human human;
	Animal* animal = &human;
	animal->Walk();

	God god;


	system("pause");
}
