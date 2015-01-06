#include<iostream>

using namespace std;

//this function will cause stack overflow
//the default size of the stack is 1MB
//you can change the stack size for this project by
//right clicking on the project -> Properties -> Configuration properties
//-> Linker -> System -> Stack reserver size and type size in bytes
//for instance if you need 1GB stack size you have to type 1000000000 (10^9)
void Print(int counter)
{
	cout << "Print(): " << counter << endl;
	counter++;

	//you can cause stack overflow faster by using large local variables
	//in the functions

	//this local variables occupies 400KB ( array of 100 000 elements of type int(4B per int) ). 
	//After 2 function calls the stack overflows
	int arr[100000]; 
	cout << sizeof(arr) << endl;

	Print(counter);
}
int main()
{
	Print(1);

	system("pause");
}