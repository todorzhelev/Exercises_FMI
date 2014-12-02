#include<iostream>
using namespace std;

int main()
{
	//enum without name
	enum
	{
		BMW,
		Lamborghini,
		Auidi
	} car1,car2; //car1 and car2 are variables of the unnamed enum

	//we initialize car1 with Lamborghini
	car1 = Lamborghini;
	cout << car1 << endl;


	//TRUE and FALSE are just identifiers, not the real true and false
	//the first element of the enum is 0 and the second is 1 as usual
	//thus in this sitation TRUE is 0 and FALSE is 1
	enum
	{
		TRUE,
		FALSE
	};

	cout << TRUE << endl;


	system("pause");
}