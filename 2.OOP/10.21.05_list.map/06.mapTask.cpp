#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

//array of integers is given. Output each number how much times is repeating.
int main()
{
	vector<int> v{ 1, 1, 1, 5, 6, 5, 7, 8, 4, 4, 3, 2, 2, 1, 5, 1, 1 };

	map<int, int> numbers;

	for (int element : v)
	{
		numbers[element]++;
	}

	for (auto element : numbers)
	{
		cout << element.first << " is found " << element.second << " times" << endl;
	}
	system("pause");
}