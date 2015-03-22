#include<iostream>

using namespace std;

int main()
{
	char str1[50] = {};

	//this way we save the string from the console, but it should not contain
	//empty spaces
	cout << "Enter string without intervals: ";
	cin >> str1; 

	cout << "The string is " << str1 << endl;

	//char str1[20] = {};

	////this way our string can contain empty spaces
	//cout << "Enter string with intervals: ";
	//cin.getline(str1,20);

	//cout << "The second string is " << str1 << endl;

	system("pause");
}