#include<iostream>
using namespace std;

void MySwap(int* number1, int* number2);

int main()
{
	int var1 = 2, var2 = 666;

	MySwap(&var1,&var2);

	cout << "var1: " << var1 << " var2: " << var2 << endl;

	system("pause");
}

//we use pointers to swap the variables
//note how much additional things are needed
//to perform the swap compared to using references
void MySwap(int* number1, int* number2)
{
	int temp = *number1;
	*number1 = *number2;
	*number2 = temp;
}