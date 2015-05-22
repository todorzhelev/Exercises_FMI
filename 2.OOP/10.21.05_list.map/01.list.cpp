#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_front(30);
	l.push_front(50);

	cout << l.back() << endl; //20
	cout << l.front() << endl; //50

	l.push_front(777);
	l.push_back(888);

	//there is no operator[] available
	//you cant get element by index, and thus you cant iterate list by the regular way (like vector)
	for (int element : l)
	{
		cout << element << " ";
	}

	cout << endl;

	l.pop_back();

	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	list<int> l1{ 5,8,13,21};
	list<int>::iterator it = ++l1.begin();
	l1.erase(it);

	for (auto element : l1) //auto is int
	{
		cout << element << " ";
	}

	cout << endl;

	auto it1 = ++l1.begin();
	l1.insert(it1, 8);

	for (auto element : l1)
	{
		cout << element << " ";
	}

	cout << endl;

	list<string> l2{ "S", "P", "Q", "R"};

	//the sort inside list can be used to sort elements
	l2.sort();
	//P Q R S
	for (auto element : l2) //auto is string
	{
		cout << element << " ";
	}

	system("pause");
}