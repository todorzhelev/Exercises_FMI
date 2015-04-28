#include<iostream>
#include<string>

using namespace std;

template<typename T>
T Min(T& a, T&b)
{
	return a < b ? a : b;
}

int main()
{
	int a = 8, b = 4;

	float c = 4.2, d = 6.5;

	string str1 = "asd";
	string str2 = "ef";

	char e = 'a';
	char f = '$';
	cout << Min(str1,str2) << endl;


	system("pause");
}