#include<iostream>

using namespace std;

int main()
{
	enum Heroes
	{
		Warrior,
		Mage,
		Priest,
		Hunter,
		Druid
	};
	//Warrior have value 0, Mage - 1, Priest - 2, Hunter - 3, Druid - 4

	//initializing variable of type Heroes
	Heroes hero = Mage;

	cout << hero << endl;

	//another way to initialize variable of type Heroes
	Heroes hero1 = Heroes::Warrior;

	//because hero1 is infact 0 and NULL is also defined to be zero
	//we enter this condition, even though this is absolutely wrong
	if( hero1 == NULL )
	{
		cout << "ujas" << endl;
	}

	enum Apples
	{
		Red,
		Green,
		Yellow
	};

	Apples apple = Red;

	//apple is initialized with Red, which is 0,
	//hero1  is initialized with Warrior, which is 0
	//we compare two uncomparable things (we cant logically compare apples to heroes), but again we enter the condition
	if( apple == hero1 )
	{
		cout << "Voinut ni e chervena iabulka" << endl;
	}

	//we can change the values of the elements
	//the other elements below the changed element will adapt
	enum Race
	{
		Human = 2,
		Orc,
		Undead,
		BloodElf
	};
	//Human is now 2, Orc is 3, Undead is 4, BloodElf is 5

	cout << Orc << endl;

	enum Car
	{
		BMW = 2,
		Porsche = 10,
		Lamborghini, //this is 11
		Audi // this is 12
	};

	Car myCar = BMW;

	// the new C++11 standard improves the way enum works
	enum class Shokolad
	{
		Bial,
		Cheren,
		Mlechen
	};

	//Shokolad shoko = Bial; //this no longer works
	Shokolad shoko = Shokolad::Mlechen;

	Car myCar = BMW;

	if( shoko == myCar ) // now we cant compare elements from different enums
	{

	}

	system("pause");
}