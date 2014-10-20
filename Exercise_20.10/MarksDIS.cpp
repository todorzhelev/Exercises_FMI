#include<iostream>

using namespace std;


int main()
{
	int contr, exam, homework;
	cout << "Enter desired points from homework in the range [0,25]: ";
	cin >> homework;

	cout << "Enter desired total points from both mid-term exams in the range [0,100] ";
	cin >> contr;

	cout << "Enter desired points from the exam in the range [0,100] ";
	cin >> exam;

	int sum = contr + exam + homework;

	if( contr < 25 || exam < 20 || sum < 65 )
	{
		cout << "Septemvri" << endl;
	}
	else if( contr > 24 && exam > 19 )
	{
		if( sum > 64 && sum < 95 )
		{
			cout << "troika" << endl;
		}
		else if( sum > 94 && sum < 130 )
		{
			cout << "chetvorka" << endl;
		}
		else if( sum > 129 && sum < 165 )
		{
			cout << "petica" << endl;
		}
		else if( sum > 164 )
		{
			cout << "otlichnik" << endl;
		}
	}


	system("pause");

	return 0;
}