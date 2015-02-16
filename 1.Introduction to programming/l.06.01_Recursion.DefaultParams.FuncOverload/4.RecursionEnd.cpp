#include<iostream>

using namespace std;

void Print(int counter)
{
	//stop the recursion when counter is 3
	if( counter == 3 )
	{
		return;
	}

	cout << "Print() " << counter << endl;
	counter++;

	Print(counter);
}

int main()
{
	Print(1);

	system("pause");
}