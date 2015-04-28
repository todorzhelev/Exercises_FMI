#include<iostream>
#include<string>

using namespace std;

template<typename T>
T Add(T& a, T&b)
{
	return a + b;
}

int main()
{
	int a = 8, b = 4;

	float c = 4.2, d = 6.5;

	string str1 = "adfasdf";
	string str2 = "omg";

	cout << Add(str1, str2) << endl;


	system("pause");
}