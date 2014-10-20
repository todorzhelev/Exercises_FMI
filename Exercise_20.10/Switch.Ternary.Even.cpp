#include<iostream>

using namespace std;

int main()
{
	//Uncomment the code that you need by selecting it and then pressing Ctrl-K/Ctrl-U 
	//or by selecting it and go to Edit -> Advanced -> Uncomment selection

	//we see that the number is 1 and we jump at the first case.
	//we dont have break in the first case, so we enter all the other cases.
	int number = 1;
	switch(number)
	{
		case 1:
		{
			cout << "the number is 1" << endl;
		}
		case 2:
		{
			cout << "the number is 2" << endl;
		}
		case 3:
		{
			cout << "the number is 3" << endl;
		}
		default: 
		{
			cout << "We will enter here if there are is no break in the above cases OR if the number value does not match the cases";
		}
	}


	////number is 2 so we jump directly at case 2. The text is printed in the console and we stop
	////because there is break. If there was no break, case 3 would have been executed too.
	//int number = 2; // test with number = 5 also
	//switch(number)
	//{
	//	case 1:
	//	{
	//		cout << "the number is 1" << endl; 
	//		break;
	//	}
	//	case 2:
	//	{
	//		cout << "the number is 2" << endl;
	//		break;
	//	}
	//	case 3:
	//	{
	//		cout << "the number is 3" << endl;
	//		break;
	//	}
	//	default: 
	//	{
	//		cout << "We will enter here if there are is no break in the above cases OR if the number value does not match the cases";
	//	}
	//}


	////Ternary operator. The format is: condition ? code if the condition is true : code if the condition is false
	//int number = 5;

	////if number is >=0 assign true to isPositive, otherwise assign false
	//bool isPositive = number >= 0 ? true: false;

	////if isPositive is true print "the number is positive" to the console, otherwise print "the number is negative"
	//isPositive == true ? cout << "the number is positive" : cout << "the number is negative";


	/*int number;
	cout << "Enter number: ";
	cin >> number;

	if( number % 2 == 0 )
	{
		cout << "the number is even" << endl;
	}
	else
	{
		cout << "the number is odd" << endl;
	}*/



	system("pause");

	return 0;

}
