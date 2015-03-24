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
		m_maxHealth = rand() % 1000;
		m_currentHealth = m_maxHealth;

		m_maxEnergy = rand() % 250;
		m_currentEnergy = m_maxEnergy;

		m_damage = rand() % 100;
		m_armor = rand() % 50;
		int spellIndex = rand() % availableSpells.size();
		m_pSpell = &availableSpells[spellIndex];

		m_bIsAlive = true;
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

		m_bIsAlive = true;
	}

	int GetMaxHealth()
	{
		return m_maxHealth;
	}

	int GetCurrentHealth()
	{
		return m_currentHealth;
	}

	void ModifyHealth(int delta)
	{
		if (m_currentHealth + delta > m_maxHealth)
		{
			m_currentHealth = m_maxHealth;
		}
		else if (m_currentHealth + delta <= 0)
		{
			m_currentHealth = 0;
			m_bIsAlive = false;
		}
		else
		{
			m_currentHealth += delta;
		}
	}

	int GetMaxEnergy()
	{
		return m_maxEnergy;
	}

	int GetCurrentEnergy()
	{
		return m_currentEnergy;
	}

	void ModifyEnergy(int delta)
	{
		if (m_currentEnergy + delta > m_maxEnergy)
		{
			m_currentEnergy = m_maxEnergy;
		}
		else if (m_currentEnergy + delta <= 0)
		{
			m_currentEnergy = 0;
		}
		else
		{
			m_currentEnergy += delta;
		}
	}

	void CastSpell(Starship& enemy)
	{
		ModifyEnergy(-m_pSpell->GetReqEnergy());

		int damageDealt = m_pSpell->GetDamage() - enemy.m_armor;

		//imagine that the armor of the enemy is bigger than the damage
		//of the spell. In this case damageDealt will be negative, which is wrong
		//so we make the damage minimum.
		if (damageDealt <= 0)
		{
			damageDealt = 1;
		}

		enemy.ModifyHealth(-damageDealt);

		cout << m_pSpell->GetName() << " used. " << damageDealt << " damage dealt" << endl;
	}

	void Attack(Starship& enemy)
	{
		if (m_currentEnergy >= m_pSpell->GetReqEnergy())
		{
			CastSpell(enemy);
		}
		else
		{
			int damageDealt = m_damage - enemy.m_armor;

			if (damageDealt <= 0)
			{
				damageDealt = 1;
			}

			enemy.ModifyHealth(-damageDealt);
		}
	}

	int GetDamage()
	{
		return m_damage;
	}

	Spell* GetSpell()
	{
		return m_pSpell;
	}

	int GetArmor()
	{
		return m_armor;
	}

	//const written at this place indicates that this function
	//cannot change any of the member variables of the class
	bool IsAlive() const
	{
		return m_bIsAlive;
	}
	
private:
	int m_maxHealth, m_currentHealth;
	int m_maxEnergy, m_currentEnergy;
	int m_armor;
	int m_damage;
	Spell* m_pSpell;
	bool m_bIsAlive;
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

	cout << amount << " ships added" << endl;
}

void PrintShips(vector<Starship>& fleet)
{
	cout << fleet.size() << " ships in the fleet" << endl;

	//for each ship in the fleet prints its statistics
	for (Starship ship : fleet)
	{
		cout << "H:" << ship.GetCurrentHealth() << "/" << ship.GetMaxHealth() << "   ";
		cout << "E:" << ship.GetCurrentEnergy() << "/" << ship.GetMaxEnergy() << "   ";
		cout << "D:" << ship.GetDamage() << "   ";
		cout << "A:" << ship.GetArmor() << "   ";
		//because GetSpell() returns pointer to Spell
		//we can access the member functions of the spell
		//only by ->
		cout << "S:" << ship.GetSpell()->GetName() << endl;
	}
}

void Fight()
{
	//while both of the fleets are non-empty
	while (!allyStarships.empty() && !enemyStarships.empty())
	{
		int attacker = rand() % 2;
		int allyIndex = rand() % allyStarships.size();
		int enemyIndex = rand() % enemyStarships.size();

		//we want to work with the original ships, not copies
		//thats why we have to use references
		Starship& allyShip = allyStarships[allyIndex];
		Starship& enemyShip = enemyStarships[enemyIndex];

		if (attacker)
		{
			allyShip.Attack(enemyShip);
			//if the enemy ship just died
			if (!enemyShip.IsAlive())
			{
				//this removes the enemy ship from the enemyStarships vector
				enemyStarships.erase(enemyStarships.begin() + enemyIndex);
				cout << "Enemy ship destroyed" << endl;
			}
		}
		else
		{
			enemyShip.Attack(allyShip);
			if (!allyShip.IsAlive())
			{
				allyStarships.erase(allyStarships.begin() + allyIndex);
				cout << "Ally ship destroyed" << endl;
			}
		}
	}

	//if all of the enemy ships are destroyed and
	//we have ships in our army we win
	if (!allyStarships.empty() && enemyStarships.empty())
	{
		cout << "Victory!" << endl;
	}
	else if (allyStarships.empty() && !enemyStarships.empty())
	{
		cout << "Defeat!" << endl;
	}
}
void ExecuteCommand(string command)
{
	if (command.compare("add ally") == 0)
	{
		AddShips(allyStarships);
	}
	else if (command.compare("add enemy") == 0)
	{
		AddShips(enemyStarships);
	}
	else if (command.compare("list ally") == 0)
	{
		PrintShips(allyStarships);
	}
	else if (command.compare("list enemy") == 0)
	{
		PrintShips(enemyStarships);
	}
	else if (command.compare("fight") == 0)
	{
		Fight();
	}
	else
	{
		cout << "Invalid command" << endl;
	}
}
void Menu()
{
	string command;
	while (true)
	{
		cout << endl;
		cout << "1.Type add ally to add ally ships" << endl;
		cout << "2.Type add enemy to add enemy ships" << endl;
		cout << "3.Type list ally to list ally ships" << endl;
		cout << "4.Type list enemy to list enemy ships" << endl;
		cout << "5.Type fight to simulate fight between the fleets" << endl;
		cout << "6.Type exit to close the app" << endl;

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