#include<iostream>
#include<string>

using namespace std;

enum Weapon
{
	Knife,
	Bat,
	Thompson
};

enum Level
{
	Associate,
	Soldier,
	Capo, 
	Consiglieri,
	Underboss, 
	Boss
};

class Gangster
{
public:
	Gangster(string name, int health, Weapon weapon, Level level)
	{
		m_name = name;
		m_health = health;
		m_weapon = weapon;
		m_level = level;
	}

private:

	string m_name;
	int m_health;
	Weapon m_weapon;
	Level m_level;
};

int main()
{
	Gangster gangster1("Pesho",100,Weapon::Bat,Level::Soldier);
	Gangster boss("Iliyan",1000,Weapon::Thompson,Level::Boss);

}