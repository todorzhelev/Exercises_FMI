#include<iostream>
using namespace std;

int main()
{
	/*
		Prefix:
		++a - purvo uvelichava a s 1 i posle pravi kakvoto i da e drugo

		Postfix:
		a++ - purvo pravi vsicho ostanalo, i sled tova inkrementira a s 1
	*/

	int a = 5;

	//a purvo se inkrementira i stava 6 i sled tova se izkarva na konzolata
	cout << ++a << endl;

	int b = 666;

	//b purvo se izkarva na ekrana i sled tova se inkrementira
	cout << b++ << endl;

	///////////////////////////////////////////////////////////////////////////////////

	int number = 7;

	// number purvo se inkrementira i stava 8, sled tova pravi sravnenieto
	if( ++number == 8 )
	{
		cout << number << endl;
	}

	// number purvo se sravniava s 8 i sled tova se inkrementira i stava 9
	if( number++ == 8 )
	{
		cout << number << endl;
	}

	///////////////////////////////////////////////////////////////////////////////////

	int x = 3;

	int y = ++x; // purvo x se inkrementira i stava 4, sled tova se prisvoiava na y. x e 4, y e 4

	cout << "x: " << x << " y: " << y << endl;

	x = 3;
	y = x++; // purvo y priema x, koeto e 3. Sled tova x se inkrementira i stava 4. x e 4, y e 3

	cout << "x: " << x << " y: " << y << endl;
}