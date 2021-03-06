#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


int main()
{
	vector<int> v{ 512, 64, 128, 256, 32 };

	//find
	cout << "find:" << endl;
	int number = 127;
	//int number = 128;
	//find returns iterator to the found element. 
	//If the element is not found it returns iterator to the end
	auto it = find(v.begin(), v.end(), number);

	if (it != v.end())
	{
		cout << "the number " << number << "is in the vector" << endl;
	}
	else
	{
		cout << "the number " << number << " is not found" << endl;
	}


	//insert
	cout << "insert:" << endl;
	//inserts 1024 at begin position
	v.insert(v.begin(), 1024);
	for (auto element : v)
	{
		cout << element << " ";
	}

	cout << endl;

	auto it1 = v.begin();
	//inserts 16 one position after begin
	v.insert(it1+1, 16);
	for (auto element : v)
	{
		cout << element << " ";
	}

	cout << endl;

	//erase
	cout << "erase:" << endl;
	auto it2 = v.begin();
	v.erase(it2 + 3);
	for (auto element : v)
	{
		cout << element << " ";
	}

	cout << endl;

	//sort
	cout << "sort:" << endl;

	//sort all the elements from begin to end
	sort(v.begin(), v.end());
	for (auto element : v)
	{
		cout << element << " ";
	}

	system("pause");
}