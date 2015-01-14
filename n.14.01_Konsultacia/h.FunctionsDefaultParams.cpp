#include<iostream>

using namespace std;

//greshka. parametrite po podrazbirane triabva
//da se pishat otdiasno naliavo
//int Add( int a = 65, int b)

int Add( int a, int b = 650)
{
	return a+b;
}

int main()
{
	//izkarva 12
	cout << Add(5,7) << endl;

	//izkarva 655
	cout << Add(5) << endl;
}