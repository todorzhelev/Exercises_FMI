#include<iostream>

using namespace std;

double GetFactorial(int number)
{
	double result = 1;

	for( int i = number; i > 0; i-- )
	{
		result *= i;
	}

	return result;
}

int main()
{
	//we want to calculate sin of any real number using the
	//Taylor series of sine
	//if you are not familiar with Taylor series 
	//look these videos http://goo.gl/oChAJM, which explains them in details

	float x;
	cout << "Enter x to calculate sin(x): ";
	cin >> x;

	//note that x is in radians, not in degrees
	//for instance if we want to find sine of 30 degrees
	//30 degrees is pi/6 in radians, which is 0.523598..
	//and now sin(0.523598) is 0.5 (1/2)

	double result = 0;
	for( int i = 0; i < 20; i++ )
	{
		int power = 2*i+1;
		double nominator = pow(x,power);
		double denominator = GetFactorial(power);
		int sign = i%2 ? -1 : 1;
		
		result += sign*nominator/denominator;
	}

	cout << "sin(" << x << ") = " << result << endl;
	
	system("pause");
}