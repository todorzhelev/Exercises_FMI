#include<iostream>
using namespace std;

int main()
{
	////REMEMBER to use breakpoints to test how different constructions are working


	//// division operator has two different modes, based on the type of the operands
	//cout << 8/9 << endl;  //prints whole number, because both the operands are whole numbers
	//cout << 8/(float)9 << endl; //prints real number, because one of the operand is real number


	//// *,/,% are from the same priority, so we have to separate the expression with ()
	//// if we dont do this the expression will be evaluated from left to right
	//// http://www.learncpp.com/cpp-tutorial/31-precedence-and-associativity/
	//cout << 6+ 8*9%2 << endl; 
	//cout << 6+ 7*(9%2) << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////

	/*float a = 0.0003678;
	float b = 0.0003679;*/

	////WRONG way to test if two real numbers are equal
	/*if( a == b )
	{
		cout << "ravni sa" << endl;
	}
	else
	{
		cout << "ne sa ravni" << endl;
	}*/

	////CORRECT way to test if two real numbers are equal
	/*float epsilon = 0.000001;

	if( abs(a-b) < epsilon )
	{
		cout << "ravni sa" << endl;
	}
	else
	{
		cout << "ne sa ravni" << endl;
	}*/

	///////////////////////////////////////////////////////////////////////////////////////////////////////

	//int a = 5, b =7;

	////swap the values of two variables by temporary variable
	//int temp = a;
	//a = b;
	//b = temp;

	////swap the values of two variables by addition and substraction
	//a = a + b;		// a = 5 + 7 = 12
	//b = a - b;		// b = 12 - 7 = 5
	//a = a -b;			// a = 12 - 5 = 7

	//cout << a << endl;
	//cout << b << endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////////

	//int a;
	//cin >> a;

	//switch( a )
	//{
	//	case 1 : cout << "Monday" << endl; break;  
	//	case 2 : cout << "Tuesday" << endl; break;  
	//	case 3 : cout << "Wednesday" << endl; break;
	//	case 4 : cout << "Thursday" << endl; break;
	//	case 5 : cout << "Friday" << endl; break;
	//	case 6 : cout << "Saturday" << endl; break;
	//	case 7 : cout << "Sunday" << endl;break;
	//	default: cout << "ne e validen den" << endl;
	//}

		////diagram for the switch above. We cant fall down, because we have break in every case
		////				________
		////1			___|________|___
		////2			___|________|___
		////3			___|________|___
		////4			___|________|___
		////5			___|________|___
		////6			___|________|___
		////7			___|________|___
		////default		   |________|


	/*int a;
	cin >> a;

	switch( a )
	{
		case 1 : 
		case 3 : 
		case 4 : 
		case 5 : cout << "FMI" << endl; break;
		case 2 : 
		case 6 : 
		case 7 : cout << "pochivka" << endl;break;
		default: cout << "ne e validen den" << endl;
	}*/

		////diagram for the switch above. If a is 1, we will start falling untill we reach 5, because we have break there.
		////				________
		////1			   |_ _ _ _ |
		////3			   |_ _ _ _ |
		////4			   |_ _ _ _ |
		////5			___|________|___
		////2			   |_ _ _ _ |
		////6			   |_ _ _ _ |
		////7			___|________|___
		////default	       |________|



	///////////////////////////////////////////////////////////////////////////////////////////////////////


	//// the message will be printed 11 times on the console.
	//// remember to use breakpoints (F9 and F10 to go down) to see the behaviour of the loop if you are not certain
	//// 
	//int i = 0;

	//while( i < 11 )
	//{
	//	cout << "Iskam 6 po diskretni strukturi" << endl;

	//	i++;
	//}
	//

	///////////////////////////////////////////////////////////////////////////////////////////////////////

	//// the body of do-while loop is guaranteed to be executed atleast once
	//// in this example we dont have counter and we will leave the loop when a is 5
	//// note that there is ; after the end of while( a != 5 )
	/*int a;
	do
	{
		cout << "Press 1 for free money" << endl;
		cout << "Press 2 for chocolate" << endl;
		cout << "Press 3 for BMW X5" << endl;
		cout << "Press 4 for 6 on DIS" << endl;
		cout << "Press 5 to exit";

		cin >> a;
		
	}
	while( a != 5 );*/
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////

	//// for loop is the most used and most important of the loops.
	//// we have 3 components: for( INITIALIZATION ; CONDITION ; INCREMENTATION ) 
	//// INITIALIZATION  happens only at the beginning of the loop
	//// CONDITION	     is checked at every iteration of the loop
	//// INCREMENTATION  is performed at every iteration of the loop

	////prints powers of 2
	//for( int i = 0; i < 10; i++ )
	//{
	//	float var = pow(2,i);
	//	cout << var << endl;
	//}

	////finds the sum of the numbers from 0 to 100
	//int sum = 0;
	//for( int i = 0; i <= 100; i++ )
	//{
	//	/
	//	sum +=i;    // same as sum = sum + i;
	//}
	//cout << sum;

	///////////////////////////////////////////////////////////////////////////////////////////////////////

	//// we create infinite loop by putting 1000 as condition. Every number different than zero will be counted as TRUE 
	//// and we will enter the loop
	//// if we have break inside loop we can leave the loop regardless of the conditions
	//int a;
	//while(0)
	//{
	//	cout << "Press 1 for free money" << endl;
	//	cout << "Press 2 for chocolate" << endl;
	//	cout << "Press 3 for BMW X5" << endl;
	//	cout << "Press 4 for 6 on DIS" << endl;
	//	cout << "Press 5 to exit";

	//	cin >> a;
	//	
	//	if( a == 5 )
	//	{
	//		break;
	//	}

	//	cout << endl << "ako e 5 ne stiga do tuk";
	//}


	///////////////////////////////////////////////////////////////////////////////////////////////////////

	//// with continue inside loop we can skip the current iteration and jump directly at the beginning of the loop
	//// regardless of what is below the continue.
	//// again, use breakpoints to be sure you got the idea
	//for( int i = 0; i < 10; i++ )
	//{
	//	if( i % 3 == 1 )
	//	{
	//		continue;
	//	}

	//	cout << i << endl;
	//}

	
	///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	////prints the digits of a number
	//int a = 567123;

	//while( a > 0 )
	//{
	//	cout << a %10 << endl;
	//	a/=10; // a = a/10;
	//}

	///////////////////////////////////////////////////////////////////////////////////////////////////////

	////prints the first 10 Fibonacci numbers (without the 1,1)
	////every next Fibonacci number is sum of the previous two
	////1,1,2,3,5,8,13,21,34,55,89,144
	//int a =1, b = 1;

	//for( int i = 0; i <10; i++ )
	//{
	//	int temp = a + b;
	//	a = b;
	//	b = temp;
	//	 
	//	cout << temp << " ";
	//}

	///////////////////////////////////////////////////////////////////////////////////////////////////////

	//// finds n! by multiplying n*(n-1)*(n-2)*...3*2*1
	/*int a;

	cin >> a;
	int result = 1;

	for( int i = a; i > 0; i-- )
	{
		result *=i;
	}

	cout << result << endl;*/

	//// finds n! by multiplying 1*2*3*...*n

	//int a;
	//cin >> a;

	//int result = 1;
	//for( int i = 1; i <= a; i++ )
	//{
	//	result *=i;
	//}

	//cout << result << endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//// we test if certain number is prime by checking if it can be 
	//// divided with no reminder by number smaller than it
	//int a;
	//cin >> a;

	//bool bIsPrime = true; // we didnt do this at the exercise; we assume that a is prime
	//					  // later if it turns out it is not prime we change it to false

	////check every number smaller than a. Note that if a is big ( 1001 ) you have to do in worst case 999 iterations 
	////to see if it is prime
	//for( int i = 2; i < a; i++ )
	//{
	//	if( a % i == 0 )
	//	{
	//		cout << a <<" is not prime. It can be divided by " << i << endl;
	//		bIsPrime = false;

	//		break; //we found divisor and we know that a is not prime, so we leave the loop
	//	}
	//}
	//if( bIsPrime == true )
	//{
	//	cout << a << " is prime" << endl;
	//}

	///////////////////////////////////////////////////////////////////////////////////////////////////////

	int a;
	cin >> a;
	
	bool bIsPrime = true;

	//improved check. We test only the first sqrt(a) numbers. If a is 1001 this is maximum 30 iterations
	for( int i = 2; i <= sqrt(a); i++ )
	{
		if( a % i == 0 )
		{
			cout << a <<" is not prime. It can be divided by " << i << endl;
			bIsPrime = false;
			break;
		}
	}

	if( bIsPrime == true )
	{
		cout << a << " is prime" << endl;
	}

	system("pause");

}