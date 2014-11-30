#include<iostream>
using namespace std;

int main()
{
	int day;

	cout << "Vuvedi nomer na den: ";
	cin >> day;

	switch (day)
	{
		case 1 : cout << "Ponedelnik"<< endl;
		case 2 : cout << "Vtornik"<< endl;
		case 3 : cout << "Sriada"<< endl;
		case 4 : cout << "Chetvurtuk"<< endl;
		case 5 : cout << "Petuk"<< endl;
		case 6 : cout << "Subota"<< endl;
		case 7 : cout << "Nedelia"<< endl;
		default: cout << "niama takuv den" << endl;
	}

	cout << "Vuvedi nomer na den: ";
	cin >> day;

	switch (day)
	{
		case 1 : cout << "Ponedelnik"<< endl;
		case 2 : cout << "Vtornik"<< endl;
		case 3 : cout << "Sriada"<< endl;
		case 4 : cout << "Chetvurtuk"<< endl; break;
		case 5 : cout << "Petuk"<< endl;
		case 6 : cout << "Subota"<< endl;
		case 7 : cout << "Nedelia"<< endl;
		default: cout << "niama takuv den" << endl;
	}

	cout << "Vuvedi nomer na den: ";
	cin >> day;

	switch (day)
	{
		case 1 : cout << "Ponedelnik"<< endl;break;
		case 2 : cout << "Vtornik"<< endl;break;
		case 3 : cout << "Sriada"<< endl;break;
		case 4 : cout << "Chetvurtuk"<< endl; break;
		case 5 : cout << "Petuk"<< endl;break;
		case 6 : cout << "Subota"<< endl;break;
		case 7 : cout << "Nedelia"<< endl;break;
		default: cout << "niama takuv den" << endl;
	}
}