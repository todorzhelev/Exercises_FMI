#include<iostream>
#include<string>

using namespace std;

//void MySwap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

template<typename T>
void MySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 8, b = 4;

	float c = 4.2, d = 6.5;

	string str1 = "adfasdf";
	string str2 = "omg";

	MySwap(str1, str2);

	cout << str1 << " " << str2 << endl;

	system("pause");
}