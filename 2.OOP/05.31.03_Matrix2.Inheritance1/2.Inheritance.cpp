#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
	Human()
	{
		m_name = "";
		m_age = 0;
	}

	Human(string name, int age)
	{
		m_name = name;
		m_age = age;
	}

	string GetName()
	{
		return m_name;
	}

	void SetName(string name)
	{
		m_name = name;
	}

	void AddFriend(Human& human)
	{
		//access modifiers work on class level.
		//we can access private members of other objects
		//from the same class
		cout << "adding " << human.m_name << " as friend" << endl;
	}

	string m_name;
	int m_age;
};

//we inherit the class Human by typing : inheritance_type class_name
//inheritance type can be public, private or protected
//after we inherit the class Human we can access the member variables 
//of the class Human
class God : public Human
{
public:
	God()
	{
		m_name = ""; //m_name is from Human
		m_age = 0; //m_age is from Human
		m_bIsImmortal = true;
	}

	God(string name, int age, bool bIsImmortal)
	{
		m_name = name;
		m_age = age;
		m_bIsImmortal = bIsImmortal;
	}

private:
	bool m_bIsImmortal;
};
int main()
{
	Human human1("pesho", 25);
	God god1("Zeus", 500, true);

	//the object of type God can access the members of class Human
	//since we have inherited it
	cout << god1.m_name << endl;

	system("pause");
}