#include<iostream>

using namespace std;

int main()
{
	int arr[5] = {66,666,12,5,4};
	
	//samoto ime arr moje da se polzva kato ukazatel kum purvia
	//element na masiva. Toest ako napishem *arr tova triabva da izkara
	//stoinostta na purvia element, toest 66

	cout << *arr << endl;
	
	///////////////////////////////////////////////////////////////////////////
	
	cout << "Address of first element " << arr << " " << &arr[0] << endl;

	///////////////////////////////////////////////////////////////////////////
	
	cout << *(arr+1) << endl; //izkarva stoinostta na vtoria element v masiva

	///////////////////////////////////////////////////////////////////////////
	
	//arr[2] na po-nisko nivo e *(arr+2)
	//po tazi logika ako napishem 2[arr] to shte se prevede do *(2+arr)
	//koeto shte vurne stoinostta na tretia element. Po nikakva prichina 2[arr] ne triabva da se polzva.
	//vsichi izvikvania po-dolu izkarvat stoinostta na tretia element - 12
	cout << arr[2] << " " << *(arr+2) << " " << 2[arr] << endl;

	///////////////////////////////////////////////////////////////////////////
	
	//obhojdame masiva
	for( int i = 0; i < 5; i++ )
	{
		cout << *(arr+i) << endl;
	}

	///////////////////////////////////////////////////////////////////////////
	
	//izkarvame stoinostta na edna kletka izvun masiva
	//stoinostta v tazi kletka moje da se polzva ot drugo prilojenie
	//ili druga chast ot nashata programa i tova koeto pravim ne e pravilno
	cout << *(arr+5) << endl;

	//ne se spirame dotuk i daje i promeniame stoinostta
	*(arr+5) = 400;
	cout << *(arr+5) << endl;
}
