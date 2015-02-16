#include<iostream>
using namespace std;

void MySwap(int number1, int number2);

int main()
{
	int var1 = 2, var2 = 666;

	//we want to swap the the variables var1 and var2
	MySwap(var1,var2);

	//the variables are not swapped, because we passed them by copy
	cout << "var1: " << var1 << " var2: " << var2 << endl;

	system("pause");
}

//Note that the variables are passed by copy
//inside the function we work with copies of the variables
//and after the end of the function the copies are destroyed
void MySwap(int number1, int number2)
{
	int temp = number1;
	number1 = number2;
	number2 = temp;
}