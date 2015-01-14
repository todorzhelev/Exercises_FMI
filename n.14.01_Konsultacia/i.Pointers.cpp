#include<iostream>

using namespace std;

int main()
{
	int var = 10;

	//printirame adresa na promenlivata var
	cout << "Address of var is: " << &var << endl;

	int* pVar = &var;

	int var2 = 15;
	//trite definicii sa ekvivalentni
	int* pVar1 = &var2;
	int * pVar2 = &var2;
	int *pVar3 = &var2;

	int* pVarr1,pVarr2; //pVarr1 e ukazatel, pVarr2 e normalna promenliva ot tip int
	int* pVarr3,*pVarr4 = &var2; //pVarr1 e nainicializiran ukazatel, a pVarr2 go inicializirame s adresa na var2

	int var4 = 777;
	int* pVar4 = &var4;

	//izkarvame stoinostta na var4 chrez ukazatelia
	cout << *pVar4 << endl;

	//promeniame stoinostta na var4 chrez ukazatelia pVar4
	*pVar4 = 600;
	cout << var4 << endl;
		
	//&var4 i pVar4 izkarvat edna i sushta stoinost
	cout << "Address of var4 " << &var4 << " " << pVar4 << endl;

	int* p = NULL;

	if( p == NULL )
	{
		cout << "error" << endl;
	}
}