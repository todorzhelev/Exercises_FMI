#include<iostream>
using namespace std;

//tursim sumata na kvadratite na chislata ot 1 do 5 vkliuchitelno
int main()
{
	
	int result = 0;

	for( int i = 1 ; i <=5 ; i++ )
	{
		result+= i*i;
	}

	cout << result << endl;
}