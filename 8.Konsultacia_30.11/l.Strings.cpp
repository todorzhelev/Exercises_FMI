#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	//ne stava triabva da ima miasto za simvola za krai
	//char str[3] = "war";

	char str1[4] = "war";

	char str2[] = "asdf";

	//niama nujda da obhojdame element po element
	//za da printirame niza
	cout << str2 << endl;

	//no ako se naloji mojem da obhodim elementite edin po edin
	for( int i = 0; i < 3; i++ )
	{
		cout << str1[i];
	}

	cout << endl;

	//vhod ot konzolata bez intervali
	char str3[10];
	cout << "Vuvedi niz: ";
	cin >> str3;
	cout << str3 << endl;

	cin.ignore(); // tova e nujno poneje getline vzima natisnatia enter ot predishnia niz i ne se vuvejda nishto

	//s intervali
	cout << "Vuvedi niz s intervali: ";
	cin.getline(str3,10);
	cout << str3 << endl;

	//////////////////////////////////////////////////////////////////////////////

	// duljina na niz

	char str4[4] = "war";

	int j = 0;
	while( str4[j] != '\0' )
	{
		j++;
	}

	cout << "the size of " << str4 << " is " << j << endl;

	////////////////////////////////////////////////////////////////////////////// 

	//iskame da proverim dali daden niz e palindrom.
	//toest kato go chetem otliavo nadiasno e sushtoto, kogato go chetem otdiasno naliavo

	char pal[] = "abcba";

	int size = strlen(pal);

	bool isPal = true;

	for( int i = 0; i < size/2; i++ )
	{
		if( pal[i] != pal[size-i-1] )
		{
			isPal = false;
			break;
		}
	}

	if( isPal )
	{
		cout << "Palindrom e" << endl;
	}
	else
	{
		cout << "Ne e palindrom" << endl;
	}
	
	//////////////////////////////////////////////////////////////////////////////
	
	//iskame da oburnem elementite na niz. 
	//ako nizut e pesho triabva da stane ohsep

	char strOb[] = "pesho";

	size = strlen(strOb);

	for( int i = 0; i < size/2; i++ )
	{
		char temp = strOb[i];
		strOb[i] = strOb[size-i-1];
		strOb[size-i-1] = temp;
	}

	cout << "Oburnatiat niz e: " << strOb << endl;
}