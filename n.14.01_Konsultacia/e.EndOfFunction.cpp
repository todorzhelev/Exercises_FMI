#include<iostream>

using namespace std;

bool IsEven(int number)
{
	if( number % 2 == 0 )
	{
		//vrushtame true i izlizame ot funkciata
		return true;
	}
	else
	{
		//vrushtame false i izlizame ot funkciata
		return false;
	}

	cout << "nikoga niama da dostigne dotuk" << endl;
}

int main()
{
	bool even = IsEven(333); //sled kato funkciata prikliuchi izpulnenieto si se vrushta tuk
	//i na promenlivata even se prisvoiava rezultatut ot izpulnenieto na IsEven(333)
}