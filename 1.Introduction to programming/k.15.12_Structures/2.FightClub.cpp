#include<iostream>
#include<time.h>

using namespace std;

struct Hero
{
	Hero(char* name, int health, int mana, int damage, int critChance)
	{
		strcpy_s(m_name, name);
		m_health = health;
		m_mana = mana;
		m_damage = damage;
		m_bIsAlive = true;
		m_critChance = critChance;
	}

	void Attack(Hero& otherHero)
	{
		int damageMultiplier = 1;

		if (rand() % 100 < m_critChance)
		{
			damageMultiplier = 10;
		}

		int damage = rand() % m_damage;

		damage *= damageMultiplier;

		otherHero.m_health -= damage;

		cout << m_name << " attacks " << otherHero.m_name << " for " << damage << " damage" << endl;

		if (otherHero.m_health < 0)
		{
			cout << m_name << " wins!" << endl;
			otherHero.m_bIsAlive = false;
		}

	}

	char m_name[50];
	int m_health;
	int m_mana;
	int m_damage;
	bool m_bIsAlive;
	int m_critChance;
};

void Fight(Hero& hero1, Hero& hero2)
{
	while (hero1.m_bIsAlive && hero2.m_bIsAlive)
	{
		int attacker = rand() % 2;

		if (attacker)
		{
			hero1.Attack(hero2);
		}
		else
		{
			hero2.Attack(hero1);
		}
	}

}

int main()
{
	srand(time(NULL));

	Hero hero1("Dichev", 1000, 4000, 100,5);
	Hero hero2("Kristina", 300, 150, 60,50);

	Fight(hero1, hero2);

	cout << endl;

	cout << hero1.m_name << " is left with " << hero1.m_health << " health" << endl;
	cout << hero2.m_name << " is left with " << hero2.m_health << " health" << endl;


	system("pause");
}