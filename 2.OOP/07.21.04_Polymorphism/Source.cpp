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
};

class Human : public Animal
{
public:
	virtual void Walk()
	{
		cout << "Human walking" << endl;
	}
};

int main()
{
	//Human h;
	//h.Walk();

	//vector<Animal> animals;
	//vector<Human> humans;

	//for (int i = 0; i < 15; i++)
	//{
	//	Animal animal;
	//	animals.push_back(animal);
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	Human human;
	//	humans.push_back(human);
	//}

	//for (int i = 0; i < animals.size(); i++)
	//{
	//	animals[i].Walk();
	//}

	//for (int i = 0; i < humans.size(); i++)
	//{
	//	humans[i].Walk();
	//}


	/*Human human;
	Animal& animal = human;
	animal.Walk();*/

	//Human human2;
	//Animal* animal1 = &human2;
	//animal1->Walk();

	/*Human human3;
	Animal animal2 = human3;
	animal2.Walk();*/

	vector<Animal*> population;
	for (int i = 0; i < 30; i++)
	{
		Animal* animal;
		if (i % 2 == 0)
		{
			animal = new Animal;
		}
		else
		{
			animal = new Human;
		}

		population.push_back(animal);
	}

	for (int i = 0; i < population.size(); i++)
	{
		population[i]->Walk();
	}


	system("pause");
}