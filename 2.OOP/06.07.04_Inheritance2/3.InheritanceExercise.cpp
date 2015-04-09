#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Kingdom
{
public:
	Kingdom()
	{
		m_name = "random";
		m_GDP = 0;
		m_populationAmount = 0;
		m_tax = 0;
		m_landArea = 0;
	}

	Kingdom(string name, float GDP, float populationAmount, int tax, float landArea)
	{
		m_name = name;
		m_GDP = GDP;
		m_populationAmount = populationAmount;
		m_tax = tax;
		m_landArea = landArea;
	}

	string GetName()
	{
		return m_name;
	}

private:
	string m_name;
	float  m_GDP;
	float  m_populationAmount;
	int	   m_tax;
	float  m_landArea;
};

class Item
{
public:
	Item()
	{
		m_name = "random";
		m_mass = 0;
		m_value = 0;
	}

	Item(string name, float mass, int value)
	{
		m_name = name;
		m_mass = mass;
		m_value = value;
	}
private:

	string m_name;
	float m_mass;
	int m_value;
};

class Slave
{
public:

	Slave()
	{
		m_name = " ";
		m_age = 20;
	}

	Slave(string name, int age)
	{
		m_name = name;
		m_age = age;
	}

	void Work()
	{
		cout << "Slave working" << endl;
	}

	void Eat()
	{
		cout << "Slave eating" << endl;
	}

	void Sleep()
	{
		cout << "Slave sleeping" << endl;
	}

	void AddItem(Item item)
	{
		m_items.push_back(item);
	}
private:
	string m_name;
	int m_age;
	vector<Item> m_items;
};

class Trader : public Slave
{
public:

	Trader()
	{
	}

	Trader(string name, int age) : Slave(name,age)
	{
	}

	void Trade()
	{
		cout << "Trader is trading" << endl;
	}
};

class Soldier : public Slave
{
public:

	Soldier()
	{
		m_fightingSkill = 0;
	}

	Soldier(string name, int age, int fightingSkill) :Slave(name, age)
	{
		m_fightingSkill = fightingSkill;
	}
	void Fight()
	{
		cout << "Soldier fighting" << endl;
	}
private:
	int m_fightingSkill;
};

class Archer : public Soldier
{
public:

	Archer()
	{
	}

	Archer(string name, int age, int fightingSkill) :Soldier(name, age,fightingSkill)
	{
	}
	void Fight()
	{
		cout << "Archer fighting" << endl;
	}
};

class Swordsman : public Soldier
{
public:

	Swordsman()
	{
	}

	Swordsman(string name, int age, int fightingSkill) :Soldier(name, age, fightingSkill)
	{
	}
	void Fight()
	{
		cout << "Swordsman fighting" << endl;
	}
};

class King : public Soldier
{
public:
	King()
	{
	}

	King(string name, int age, int fightingSkill) :Soldier(name, age, fightingSkill)
	{
	}

	void SitOnTheThrone()
	{
		cout << "The king is sitting on the throne" << endl;
	}

	void StartWar(Kingdom& enemy)
	{
		cout << "Starting war against " << enemy.GetName() << endl;
	}

	void PutPeopleInJail(int amount)
	{
		cout << "Putting " << amount << "people in jail" << endl;
	}
};
int main()
{
	Kingdom England("Kingdom of England", 10, 5.75, 10, 151);
	Kingdom France("Kingdom of France", 19, 21, 30, 600);

	King king("Henry VIII", 19, 3000);
	king.StartWar(France);
	king.Eat();
	king.Sleep();

	Swordsman s1("Vanka", 20, 10);

	s1.Fight();
	system("pause");
}