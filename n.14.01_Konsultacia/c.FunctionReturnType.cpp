#include<iostream>

using namespace std;

//tuk iskame da izchislim proizvedenieto na cifrite i da vurnem rezultat
//tozi rezultat moje da se polzva v druga chast ot koda sled tova.
int GetNumberDigitsMultiplied(int number)
{
	int mul = 1;
	int temp = number;
	while( temp > 0 )
	{
		mul *= temp % 10;
		temp/=10;
	}
	return mul;
}

//tuk ni interesuva samo da izkarame v konzolata proizvedenieto ot cifrite
//ne iskame da vrushtame rezultat
void PrintNumberDigitsMultiplied(int number)
{
	int mul = 1;
	int temp = number;
	while( temp > 0 )
	{
		mul *= temp % 10;
		temp/=10;
	}

	cout << "Proizvedenieto e : " << mul << endl;
}

int main()
{
	PrintNumberDigitsMultiplied(415);

	int result = GetNumberDigitsMultiplied(415);
}