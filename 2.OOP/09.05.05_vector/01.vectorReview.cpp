#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	cout << v.back() << endl; //5

	v.pop_back();

	cout << v.back() << endl; //4
	cout << v.front() << endl; //3

	system("pause");
}