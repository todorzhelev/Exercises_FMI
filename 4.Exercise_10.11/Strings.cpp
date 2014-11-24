#include<iostream>
using namespace std;


int GetSize(char* str)
{
	int i = 0;

	//we iterate over each symbol and check if it is \0
	//if it's not we increment i
	while( str[i] != '\0' )
	{
		i++;
	}

	return i;
}

// first version of compare. 
void CompareV1( char* str1, char* str2)
{
	int size1 = GetSize(str1);
	int size2 = GetSize(str2);

	bool bEqual = true;
	
	if( size1 != size2 )
	{
		bEqual = false;
	}
	else
	{
		for(int i = 0; i < size1; i++)
		{
			if(str1[i] != str2[i] )
			{
				bEqual = false;
				break;
			}
		}
	}

	if( !bEqual )
	{
		cout << "Ne sa ravni" << endl;
	}
	else
	{
		cout << "Ravni sa" << endl;

	}
}

//second version of compare
void CompareV2( char* str1, char* str2)
{
	// imagine that str1 is abcd and str2 is abcde
	// with the loop we will reach the end of str1
	int i = 0;
	while( str1[i] != '\0' && str1[i] == str2[i] )
	{
		i++;
	}
	//after the end of the loop i is 4

	// at position 4 str1 has \0 while str2 has e
	// thus they are not equal
	if( str2[i] == '\0' )
	{
		cout << "Ravni sa" << endl;
	}
	else
	{
		cout << "Ne sa ravni" << endl;
	}
}

int main()
{
	//// String is array of symbols(chars). 
	//// To identify where is the end of the string \0 is placed at the end.
	//// Because of this, we need to save one element of the array for the \0

	////////////////////////////////////////////////////////////////////////////////////////////////

	// Different ways to initialize strings:
	char str[3] = {'a','b'};  // the string is ab and we save one place for \0
	char str1[3] = "ab";
	char str2[50] = "qwerty"; // the string is qwerty. The size, though, is 50. 
							 // all the elements after qwerty will be \0

	char str3[] = "asdf"; // automatically sets the size to 5 - 4 symbols and \0

	char* str4 = "vdfvdf dfsdf"; // we can also use pointer to char as array of chars

	//// we can print the content of the string:
	cout << str << endl;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////

	//char* str = "Asdf";
	//cout << GetSize(str) << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////

	//char* str2 = "abcd";
	//char* str3 = "abcde";

	//CompareV2(str2,str3);

	////////////////////////////////////////////////////////////////////////////////////////////////

	system("pause");

	return 0;

}