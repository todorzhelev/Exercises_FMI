#include<iostream>

using namespace std;

int main()
{

	//We can get the address of a variable with &
	int number = 5;

	//the address is in hexadecimal
	cout << &number << endl;

	///////////////////////////////////////////////////////////////////////////

	////We can use special variable - pointer to store the addresses of other variables
	////the pointer must be initialized with address of other variable or with NULL
	////
	//int number = 5;

	//int* p = &number;

	////we print the information stored in p - the address of number
	//cout << p << endl;

	///////////////////////////////////////////////////////////////////////////

	////We can access the value of the variable we are pointing to by using *
	//int number = 5;

	//int* p = &number;

	////p points to number, which has value 5. With *p we can change this value.
	//*p = 666;

	///////////////////////////////////////////////////////////////////////////
	
	//// We can initialize the pointer with NULL or 0. 
	//// In this case if we use *p, the program will crash, as we dont point to anything

	//int* p = NULL;
	//
	//// the program will crash because p doesn't point to anything
	//cout << *p << endl;

	///////////////////////////////////////////////////////////////////////////

	//// We are trying to be hackers and we access variables in the memory that we should not access
	//int number = 6;

	//int* p = &number;

	//for( int i = 0; i < 10; i++ )
	//{
	//	// p contains the address of number, but the address is just a number
	//	// which can be incremented. This way we point to the next variable in the memory
	//	p++;

	//	// we get the value of the next variable in the memory
	//	cout << *p << endl;
	//}

	///////////////////////////////////////////////////////////////////////////

	////// Pointers to constant variables:
	//const int number = 6;
	//const int number2 = 100;

	//const int* p = &number;

	////the variable number is constant so we cannot change it's value through the pointer
	//*p = 400;

	////on the other hand we can make the pointer to point to another variable
	//p = &number2;

	///////////////////////////////////////////////////////////////////////////

	////// Constant pointer to variable
	//int number = 6;
	//int number2 = 100;

	//int* const p = &number;

	////we can change the value of number with the pointer
	//*p = 400;

	////on the other hand p cannot point to another variable, because it is constant pointer
	//p = &number2;

	///////////////////////////////////////////////////////////////////////////

	////// Constant pointer to constant variable
	//const int number = 6;
	//const int number2 = 100;

	//const int* const p = &number;

	////we can't change the value of number with the pointer, because number is constant
	//*p = 400;

	////p cannot point to another variable, because it is constant pointer
	//p = &number2;

	///////////////////////////////////////////////////////////////////////////
	
	// To understand what is the pointer read from right to left and substitute * with "pointer to"
	// for instance const int* const p - "Constant pointer to constant int"
	// for instance const int* p - "Pointer to constant int"
	// for instance int * const p - "Constant pointer to int"


	system("pause");

	return 0;

}