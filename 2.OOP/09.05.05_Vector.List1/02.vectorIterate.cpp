#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	//Different ways to iterate
	vector<int> v;
	v.push_back(333);
	v.push_back(444);
	v.push_back(555);

	//333 444 555
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;

	/////////////////////////////////////////////////

	//100 100 100
	for (int element : v)
	{
		element = 100;
		cout << element << " ";
	}

	cout << endl;

	//333 444 555
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;

	/////////////////////////////////////////////////

	for (int& element : v)
	{
		element = 300;
		cout << element << " ";
	}

	cout << endl;

	//300 300 300
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;

	////////////////////////////////////////////////

	//Iterating with iterator

	//300 300 300
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	system("pause");
}