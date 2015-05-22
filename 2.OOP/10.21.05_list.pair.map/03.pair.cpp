#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	pair<int, int> p = make_pair(4, 6);
	
	cout << "first " << p.first << " second " << p.second << endl;

	vector<pair<string, int>> v;

	v.push_back(make_pair("Archer", 15));
	v.push_back(make_pair("Footman", 15));
	v.push_back(make_pair("Peasant", 200));

	for (int i = 0; i < v.size();  i++)
	{
		cout << v[i].first << ":" << v[i].second << endl;
	}

	for(pair<string,int> element : v) //analogically for(auto element : v)
	{
		cout << element.first << ":" << element.second << endl;
	}

	system("pause");
}