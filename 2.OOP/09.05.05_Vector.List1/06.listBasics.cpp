#include<iostream>
#include<list>
//#include<string>
//#include<algorithm>
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

	//l.push_front(777);
	//l.push_back(888);

	////there is no operator[] available
	////you cant get element by index, and thus you cant iterate list by the regular way (like vector)
	//for (int& element : l)
	//{
	//	cout << element << " ";
	//}

	//cout << endl;

	//l.pop_back();
	//l.pop_front();

	////the advantage of using iterators is that you have control
	////over how much to increment and which element to get
	//for (auto it = l.begin(); it != l.end(); it++)
	//{
	//	cout << *it << " ";
	//}

	//cout << endl;

	//list<string> l1{ "S", "P", "Q", "R"};

	////the sort inside list can be used
	//l1.sort();
	//for (string str : l1)
	//{
	//	cout << str << " ";
	//}

	////otherwise the regular sort can be used
	////sort(l1.begin(), l1.end());
	////for (string str : l1)
	////{
	////	cout << str << " ";
	////}

	system("pause");
}