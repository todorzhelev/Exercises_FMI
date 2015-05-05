#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(11);
	v.push_back(19);
	v.push_back(23);
	v.push_back(31);

	vector<int>::iterator it = v.begin();
	cout << *it << endl; //11

	//end() returns one position after the end
	vector<int>::iterator it1 = v.end()-1;
	cout << *it1 << endl; //31

	vector<int>::iterator it2 = v.begin();
	it2++;
	cout << *it2 << endl; //19

	auto a = 5; //a is int
	auto b = "asd"; //b is string

	auto it3 = v.begin() + 2;
	cout << *it3 << endl; //23

	cout << endl;

	for (auto it4 = v.begin(); it4 != v.end(); it4++)
	{
		cout << *it4 << " ";
	}

	cout << endl;

	system("pause");
}