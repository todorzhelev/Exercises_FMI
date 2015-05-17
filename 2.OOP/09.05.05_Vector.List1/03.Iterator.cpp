#include<iostream>
#include<vector>
#include<string>

using namespace std;

//iterators are like pointers to elements in a collection
int main()
{
	vector<int> v;
	v.push_back(11);
	v.push_back(19);
	v.push_back(23);
	v.push_back(31);

	//the type of the variable is vector<int>::iterator
	vector<int>::iterator it = v.begin(); //begin() returns iterator to first element of collection
	//iterator points to element in the collection.
	//to get the element value we have to write * before it
	cout << *it << endl; //11

	//end() returns iterator one position after the end
	vector<int>::iterator it1 = v.end()-1;
	cout << *it1 << endl; //31

	vector<int>::iterator it2 = v.begin();
	it2++;
	cout << *it2 << endl; //19

	//the keyword auto can be used if we dont want to write
	//the type. The compiler automatically finds out the type
	auto a = 5; //a is int
	auto b = "asd"; //b is string

	//the type of it3 is vector<int>::iterator, but for short we just write auto
	auto it3 = v.begin() + 2;
	cout << *it3 << endl; //23

	cout << endl;

	//the type of it4 is vector<int>::iterator
	for (auto it4 = v.begin(); it4 != v.end(); it4++)
	{
		cout << *it4 << " ";
	}

	cout << endl;

	system("pause");
}