#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	map<string, int> persons;
	persons["Pesho"] = 100;

	cout << "age of Pesho is " << persons["Pesho"] << endl;

	map<string, int> shop;

	shop["Agility potion"] = 50;
	shop["Stamina potion"] = 100;
	shop["Mana potion"] = 200;
	shop["Health potion"] = 200;

	for (map<string, int>::iterator it = shop.begin(); it != shop.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}

	//for(pair<string,int> element : shop)
	for (auto element : shop)
	{
		cout << element.first << ": " << element.second << endl;
	}

	map<string, int> balance;
	balance["copper"]; //the value is initialized with 0
	balance["silver"];
	balance["gold"];

	//it doesnt add element. It just updates the key "gold" with value 100
	balance["gold"] = 100; 

	//note again that the elements are sorted by the keys
	for (auto element : balance)
	{
		cout << element.first << ": " << element.second << endl;
	}


	system("pause");
}