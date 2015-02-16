#include<iostream>

using namespace std;

int main()
{

	int& ref1; //this is wrong. we have to assign the reference to some existing variable
	int* p1; //on the other hand with pointers this is not necessary


	int var = 7;
	int& ref = var; //initializing reference with variable
	int* p = &var; //initializing p with the address of var

	ref = 951; //changing var via the reference
	*p = 800; //changing var via the pointer

	cout << "var: " << var << " ref: " << ref << " *p: " << *p << endl;

	cout << endl;

	int number = 100;

	//this way we dont reassign the reference, we just get
	//the value of number and through the reference we change
	//the value of var
	ref = number; 

	//on the other hand we can point p to another variable
	p = &number;

	cout << "var: " << var << " ref: " << ref << " *p: " << *p << endl;


	system("pause");
}


