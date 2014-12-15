#include<iostream>

using namespace std;

int main()
{
	float a = 3.56718910;
	float b = 433.25861499;
	double c = 0.000000000000000000001;

	//da izkarva do 3 cifri sled desetichnata tochka
	cout.precision(3);

	//printira vuv format s desetichna tochka
	cout << fixed << a << endl <<  b << endl << c << endl;

	//printira vuv format s mantisa i eksponenta
	//4.333e+002 e sushtoto kato 4.333 * 10^2
	//5e-002 e sushtoto kato 5*10^(-2)
	cout << scientific << a << endl <<  b << endl << c << endl;

}