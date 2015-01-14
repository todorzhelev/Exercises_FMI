#include<iostream>

using namespace std;

int main()
{
	//za da razberem tochno kakuv e ukazateliat mojem da chetem
	//otdiasno naliavo, kato zameniame * s dumite "ukazatel kum"
	//ili ako imame * const s dumite "konstanten ukazatel kum"
	//naprimer ako imame int * const pA = &a; to pA e konstanten ukazatel kum int
	
	//////////////////////////////////////////////////////////////

	//1. Ukazatel kum konstanta. 
	//Chrez ukazatelia ne mojem da promeniame promenlivata,
	//no mojem da nasochim ukazatelia kum druga konstanta
	const int b = 8;
	const int c = 777;

	int const * pB = &b; //sushtoto kato const int * pB = &b;
	
	*pB = 100; //greshka
	pB = &c; //pozvoleno

	////////////////////////////////////////////////////////////////

	//2. Konstanten ukazatel kum promenliva. 
	//Ne mojem da nasochim ukazatelia kum druga promenliva,
	//no mojem da promenim stoinostta na promenlivata, kum koiato sochi ukazateliat.
	int a = 5;
	int d = 999;

	int * const pA = &a;
	
	*pA = 100; //pozvoleno
	pA = &d; //greshka

	//////////////////////////////////////////////////////////////

	//3. Konstanten ukazatel kum konstantna promenliva. 
	//Ne mojem da nasochim ukazatelia kum druga promenliva
	//i ne mojem da promeniame stoinostta na promenlivata chrez ukazatelia

	const int f = 500;
	const int g = 4;
	int const * const pF = &f; //sushtoto kato const int * const pF = &f;
	
	*pF = 100; //greshka
	pF = &g;   //greshka
}
