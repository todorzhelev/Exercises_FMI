#include<iostream>

using namespace std;

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
	
	//izvikva funkciata s dvata parametura ot tip int
	int result = Add(num1,num2);

	cout << result << endl;

	float num3 = 3.5, num4 = 4.6;

	//izvikva funkciata s dvata parametura ot tip float
	float result1 = Add(num3,num4);

	cout << result1 << endl;

	float num5 = 3.12;
	
	//izvikva funkciata s trite parametura
	float result2 = Add(num3,num4,num5);

	cout << result2 << endl;
}