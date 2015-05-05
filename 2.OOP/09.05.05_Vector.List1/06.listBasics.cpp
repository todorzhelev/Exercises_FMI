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

	system("pause");
}