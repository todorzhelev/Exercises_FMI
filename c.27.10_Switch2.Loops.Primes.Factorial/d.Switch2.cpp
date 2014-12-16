#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter number of a day ";
	cin >> a;

	switch( a )
	{
		case 1 : cout << "Monday" << endl; break;  
		case 2 : cout << "Tuesday" << endl; break;  
		case 3 : cout << "Wednesday" << endl; break;
		case 4 : cout << "Thursday" << endl; break;
		case 5 : cout << "Friday" << endl; break;
		case 6 : cout << "Saturday" << endl; break;
		case 7 : cout << "Sunday" << endl;break;
		default: cout << "ne e validen den" << endl;
	}

		//diagram for the switch above. We cant fall down, because we have break in every case
		//			    ________
		//1			___|________|___
		//2			___|________|___
		//3			___|________|___
		//4			___|________|___
		//5			___|________|___
		//6			___|________|___
		//7			___|________|___
		//default	   |________|


	cout << endl;

	int b;
	cout << "Enter number of a day ";
	cin >> b;

	switch( b )
	{
		case 1 : 
		case 3 : 
		case 4 : 
		case 5 : cout << "FMI" << endl; break;
		case 2 : 
		case 6 : 
		case 7 : cout << "pochivka" << endl;break;
		default: cout << "ne e validen den" << endl;
	}

		//diagram for the switch above. If a is 1, we will start falling untill we reach 5, because we have break there.
		//			    ________
		//1			   |_ _ _ _ |
		//3			   |_ _ _ _ |
		//4			   |_ _ _ _ |
		//5			___|________|___
		//2			   |_ _ _ _ |
		//6			   |_ _ _ _ |
		//7			___|________|___
		//default	   |________|

	system("pause");
}