#include<iostream>
using namespace std;

void MySwap(int& number1, int& number2);

int main()
{
	int var1 = 2, var2 = 666;

	MySwap(var1,var2);

	cout << "var1: " << var1 << " var2: " << var2 << endl;

	system("pause");
}

//we pass the variables by reference
//we work with the references of the variables
//and this way the variables are swapped
void MySwap(int& number1, int& number2)
{
	int temp = number1;
	number1 = number2;
	number2 = temp;
}