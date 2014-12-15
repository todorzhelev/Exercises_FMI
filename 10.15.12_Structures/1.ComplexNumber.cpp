#include<iostream>
#include<string>

using namespace std;

struct ComplexNumber
{
	void Print()
	{
		//if the imaginary part is negative sign will be empty
		//otherwise it will be +
		char* sign = m_Imag < 0 ? "" : "+";

		cout << m_Real << sign << m_Imag << "i" << endl;
	}

	void Add(ComplexNumber& cn)
	{
		m_Real += cn.m_Real;
		m_Imag += cn.m_Imag;
	}

	void Subtract(ComplexNumber& cn)
	{
		m_Real -= cn.m_Real;
		m_Imag -= cn.m_Imag;
	}

	void MultiplyByScalar(double scalar)
	{
		m_Real*= scalar;
		m_Imag*= scalar;
	}

	void Multiply(ComplexNumber& cn)
	{
		double RealPart = m_Real*cn.m_Real - m_Imag*cn.m_Imag;
		double ImagPart = m_Real*cn.m_Imag + m_Imag*cn.m_Real;

		m_Real = RealPart;
		m_Imag = ImagPart;
	}

	double m_Real;
	double m_Imag;
};

int main()
{
	ComplexNumber number1;
	number1.m_Real = 10;
	number1.m_Imag = 20;

	ComplexNumber number2;
	number2.m_Real = 4;
	number2.m_Imag = 7;

	number1.Add(number2);

	number1.Print();

	ComplexNumber number3;
	number3.m_Real = 3;
	number3.m_Imag = 2;

	ComplexNumber number4;
	number4.m_Real = 4;
	number4.m_Imag = 5;

	number3.Multiply(number4);

	number3.Print();

	system("pause");
}