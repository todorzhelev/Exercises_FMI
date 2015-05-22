#include<iostream>
#include<vector>
#include<string>

using namespace std;

template<typename U,typename V>
struct Pair
{
	Pair() :first(), second(){} //initializes strings with empty string, integers with 0
	Pair(U val1, V val2) : first(val1), second(val2) {}

	U first;
	V second;
};
int main()
{
	Pair<string, int> p1("Tsar Ivan Asen II",1218);
	Pair<string, int> p2("Tsar Simeon", 893);

	cout << p1.first << " " << p1.second << endl;
	cout << p2.first << " " << p2.second << endl;

	system("pause");
}