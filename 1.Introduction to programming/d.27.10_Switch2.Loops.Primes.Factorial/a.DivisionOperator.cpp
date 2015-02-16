#include<iostream>

using namespace std;

int main()
{
	// division operator has two different modes, based on the type of the operands

	cout << 8/9 << endl;		 //prints whole number, because both the operands are whole numbers
	cout << 8/(float)9 << endl;  //prints real number, because one of the operand is real number


	// *,/,% are from the same priority, so we have to separate the expression with ()
	// if we dont do this the expression will be evaluated from left to right
	// http://www.learncpp.com/cpp-tutorial/31-precedence-and-associativity/

	cout << 6+ 8*9%2 << endl; 
	cout << 6+ 7*(9%2) << endl;


	system("pause");
}