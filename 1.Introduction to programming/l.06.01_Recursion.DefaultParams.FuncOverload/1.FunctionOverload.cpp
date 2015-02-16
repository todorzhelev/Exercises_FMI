#include<iostream>

using namespace std;

//to overload function it must have the same name as the original function
//and atleast one parameter of different type or different number of parameters
//if you just change the return type of the function, it is not overloaded

int Add(int var1, int var2)
{
	return var1+var2;
}

float Add(float var1, float var2)
{
	return var1+var2;
}

float Add(float var1, float var2, float var3)
{
	return var1+var2+var3;
}

int main()
{
	int num1 = 3, num2 = 4;
	//calls the function with 2 integers
	int result = Add(num1,num2);

	cout << result << endl;

	float num3 = 3.5, num4 = 4.6;
	//calls the function with 2 floats
	float result1 = Add(num3,num4);

	cout << result1 << endl;

	float num5 = 3.12;
	//calls the function with 3 floats
	float result2 = Add(num3,num4,num5);

	cout << result2 << endl;
	

	system("pause");
}