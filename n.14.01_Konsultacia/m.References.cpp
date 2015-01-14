#include<iostream>

using namespace std;

int main()
{
	int var = 5;
	int& ref = var; //zakachame ref kum var

	ref++; //chrez psevdonima promeniame stoinostta na var na 6
	cout << var << endl;

	int var1 = 100;
	ref = var1; //taka ne zakachame ref kum var1, a vzimame stoinostta na var1 i ia prisvoiavame na var chrez psevdonima

	//trite izkarvat edna i sushta stoinost
	cout << var << " " << ref << " " << var1 << endl;
}
