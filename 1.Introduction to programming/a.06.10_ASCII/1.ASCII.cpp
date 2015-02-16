#include<iostream>

using namespace std;

//every symbol is represented by code in the ASCII table
int main()
{
	char symb = 'a';

	//gets the ascii code of a, which is 97
	int asciiCode = (int) symb;

	cout << "the ASCII code of "<< symb << " is " << asciiCode << endl;

	char symb2 = '5';

	//the ascii code of 5 is 53
	cout << "the ASCII code of "<< symb2 << " is " << (int)symb2 << endl;

	cout << endl;

	//on the other hand you can get symbol from the ascii code
	
	int code = 98;
	char symbol3 = (char) code; //symbol3 must be b

	cout << "the symbol with ASCII code " << code << " is " << symbol3 << endl;

	system("pause");
}