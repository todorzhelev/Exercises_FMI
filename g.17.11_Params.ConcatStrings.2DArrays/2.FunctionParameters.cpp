#include<iostream>

using namespace std;

//this is function prototype.
void Add(int number, int amount);

int main()
{	
	int num = 666;

	//when we pass num to Add, it is created copy of num
	Add(num,4);

	//note that after the end of the function num is not changed
	cout << "the original number is " << num << endl;

	system("pause");
}

void Add(int number, int amount)
{
	//number is local variable for Add. it will be destroyed after the end of the function
	number += amount;

	cout << "the copy is " << number << endl;
}

