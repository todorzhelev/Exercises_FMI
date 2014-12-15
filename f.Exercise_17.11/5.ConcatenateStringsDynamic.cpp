#include<iostream>
#include<cstring>

using namespace std;

//we dont want to rely that str1 will have enough space to hold the 
//concatenated string. Because of this we will construct our string
//which will be returned by the function

char* Concatenate(char* str1, char* str2);

int main()
{
	char str1[50] = {};
	char str2[30] = {};

	cout << "Enter first string: ";
	cin.getline(str1,50);
	
	cout << "Enter second string: ";
	cin.getline(str2,30);

	char* result = Concatenate(str1,str2);

	cout << result;

	system("pause");
}

//imagine that str1 is "freedom is " and str2 is "slavery"
char* Concatenate(char* str1, char* str2)
{
	int size1 = strlen(str1); //size1 will be 11
	int size2 = strlen(str2); //size2 will be 7

	int newSize = size1+size2+1; //we want to have space for both strings and \0 for end

	//we allocate memory in the heap for array of characters with size - newSize
	char* newString = new char[newSize];

	//we copy the content of str1 in our newString
	for( int i = 0; i < size1; i++ )
	{
		newString[i] = str1[i];
	}

	//newString will be "freedom is "

	//we copy the content of str2 in newString
	for( int i = 0, j = size1; i < size2; i++,j++ )
	{
		newString[j] = str2[i];
	}

	//newString will be "freedom is slavery"

	//note that we have to put \0 at the end, because the program wont know where is the end of 
	//the string and additional characters will be printed from the next cells in memory
	//if you are not sure why you have to do this,
	//comment the next line and try the code without it.
	newString[newSize-1] = '\0';

	return newString;
}