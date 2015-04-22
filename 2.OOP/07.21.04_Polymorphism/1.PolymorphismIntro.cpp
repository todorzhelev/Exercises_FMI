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
	//imagine that the population consist of animals and humans
	//and we want to have control over them.
	//Therefore we create 2 different arrays for them and we call the Walk function

	vector<Animal> animals;
	vector<Human> humans;

	for (int i = 0; i < 3; i++)
	{
		Animal animal;
		animals.push_back(animal);
	}

	for (int i = 0; i < 2; i++)
	{
		Human human;
		humans.push_back(human);
	}

	for (int i = 0; i < animals.size(); i++)
	{
		animals[i].Walk();
	}

	for (int i = 0; i < humans.size(); i++)
	{
		humans[i].Walk();
	}
	cout << "----------------------------" << endl;

	//The code above is not good, becase for each new class (for instance class God, which inherits Human)
	//we have to make new array. To solve this problem we use polymorphism.
	//Polymorphism works only with references and pointers
	Human human;
	Animal& animal = human;
	animal.Walk();

	Human human2;
	//notice that we have pointer to Animal, but instead we point to Human.
	//this way we point to the Animal part of Human object
	Animal* animal1 = &human2;
	animal1->Walk();

	Human human3;
	Animal animal2 = human3;
	animal2.Walk(); //this wont work - it will output Animal walking

	cout << "----------------------------" << endl;

	//with polymorphism we can have SINGLE array holding all the elements
	vector<Animal*> population;

	for (int i = 0; i < 10; i++)
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

	//the correct function will be executed
	for (int i = 0; i < population.size(); i++)
	{
		population[i]->Walk();
	}


	system("pause");
}