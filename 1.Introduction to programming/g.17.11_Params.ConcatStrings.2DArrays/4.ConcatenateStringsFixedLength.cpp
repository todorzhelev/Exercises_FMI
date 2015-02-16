#include<iostream>
#include<cstring> //we need it for strlen

using namespace std;

//source content will be concatenated with the content of destination
//for instance if destination is "war is " and source is "peace"
//after the function is executed in destination we will have "war is peace" 
void Concatenate(char* destination, char* source);

int main()
{
	//note that the size of str1 and str2 is fixed
	//we cant have different size during runtime, in case the user 
	//enters too big string
	char str1[50] = {};
	char str2[30] = {};

	cout << "Enter first string: ";
	cin.getline(str1,50);
	
	cout << "Enter second string: ";
	cin.getline(str2,30);

	Concatenate(str1,str2);

	//the result of concatenation is in str1
	cout << str1;

	system("pause");
}


void Concatenate(char* destination, char* source)
{
	int size1 = strlen(destination);
	int size2 = strlen(source);

	for( int i = 0, j = size1; i < size2; i++,j++ )
	{
		destination[j] = source[i];
	}
}