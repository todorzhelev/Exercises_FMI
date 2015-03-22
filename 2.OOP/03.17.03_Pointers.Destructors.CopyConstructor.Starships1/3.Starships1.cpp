#include<iostream>
#include<string>
#include<time.h>
#include<vector>

using namespace std;

class Spell
{
public:
	Spell(string name, int damage, int requiredEnergy, string description)
		: m_name(name), m_damage(damage), m_requiredEnergy(requiredEnergy), m_description(description)
	{}

	string GetName()
	{
		return m_name;
	}

	int GetDamage()
	{
		return m_damage;
	}

	int GetReqEnergy()
	{
		return m_requiredEnergy;
	}

private:
	string m_name;
	int m_damage;
	int m_requiredEnergy;
	string m_description;
};

vector<Spell> availableSpells;

class Starship
{
public:
	Starship()
	{
		m_maxHealth = rand() % 300;
		m_currentHealth = m_maxHealth;

		m_maxEnergy = rand() % 250;
		m_currentEnergy = m_maxEnergy;

		m_damage = rand() % 100;
		m_armor = rand() % 50;
		int spellIndex = rand() % availableSpells.size();
		m_pSpell = &availableSpells[spellIndex];
	}

	Starship(int maxHealth, int maxEnergy, int damage, int armor)
	{
		m_maxHealth = maxHealth;
		m_currentHealth = m_maxHealth;

		m_maxEnergy = maxEnergy;
		m_currentEnergy = m_maxEnergy;

		m_damage = damage;
		m_armor = armor;
		int spellIndex = rand() % availableSpells.size();
		m_pSpell = &availableSpells[spellIndex];
	}
	
private:
	int m_maxHealth, m_currentHealth;
	int m_maxEnergy, m_currentEnergy;
	int m_armor;
	int m_damage;
	Spell* m_pSpell;
};

vector<Starship> allyStarships;
vector<Starship> enemyStarships;

void AddShips(vector<Starship>& fleet)
{
	int amount = rand() % 20 + 1;
	for (int i = 0; i < amount; i++)
	{
		Starship ship;
		fleet.push_back(ship);
	}
}

void ExecuteCommand(string command)
{
	if (command.compare("add ally") == 0)
	{
		AddShips(allyStarships);
	}
}
void Menu()
{
	string command;
	while (true)
	{
		cout << "1.Type add ally to add ally ships" << endl;
		cout << "2.Type add enemy to add enemy ships" << endl;
		cout << "3.Type exit to close the app" << endl;

		getline(cin, command);
		if (command.compare("exit") == 0)
		{
			break;
		}
		else
		{
			ExecuteCommand(command);
		}
	}
}
int main()
{
	srand(time(0));

	Spell cannon("Yamato cannon", 300, 125, "Blasts a target with a..");
	Spell nuke("Nuke", 500, 200, "Causes 500 damage");

	availableSpells.push_back(cannon);
	availableSpells.push_back(nuke);

	Menu();
	system("pause");
}