#include<iostream>
using namespace std;

int main()
{
	enum Apples
	{
		Red,
		Green,
		Yellow
	};
	Apples apple = Red;

	cout << Red << " " << apple << endl;

	enum Heroes
	{
		Warrior = 1,
		Hunter,
		Mage = 8,
		Priest,
		Warlock
	};

	Heroes hero = Heroes::Warlock;

	cout << hero << endl;

	Heroes warr = Heroes::Warrior;
	Apples greenApple = Apples::Green;

	if( warr == greenApple )
	{
		cout << "The warrior is green apple " << endl;
	}
}