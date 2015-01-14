#include<iostream>

using namespace std;

//parametrite se predavat po stoinost. v sluchia sled kato sme podali promenlivite
//vec1x,vec1y,vec2x,vec2y vutre vuv funkciata se raboti s tehni kopia, koito sled kraia na funkciata
//se unishtojavat
int GetDotProduct(int x1,int y1, int x2, int y2)
{
	int dotProduct = x1*x2+y1*y2;

	return dotProduct;
}

//iskame da vurnem rezultatut chrez parametur, no kogato podadem
//result2 na funkciata se suzdava kopie na result2 i rabotim s kopieto.
//Sled kraia na funkciata kopieto se unishtojava, a result2 e nepromenena
void GetDotProduct2(int x1,int y1, int x2, int y2,int result)
{
	result = x1*x2+y1*y2;
}

int main()
{
	//izchisliavame skalarnoto proizvedenie na dva vektora

	int vec1x = 2, vec1y = 3;
	int vec2x = 1, vec2y = 7;

	int result = GetDotProduct(vec1x,vec1y,vec2x,vec2y);

	cout << result << endl;

	int result2 = 0;
	GetDotProduct2(vec1x,vec1y,vec2x,vec2y,result2);
	cout << result2 << endl;
}