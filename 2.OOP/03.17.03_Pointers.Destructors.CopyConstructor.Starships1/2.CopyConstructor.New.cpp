#include<iostream>

using namespace std;

//Usually implementing the copy constructor is not needed.
//In this scenario, though, if we dont implement it, the program
//will not work correctly.
class MyClass
{
public:

	MyClass(int size)
	{
		m_size = size;
		m_pData = new int[size];

		for (int i = 0; i < size; i++)
		{
			cout << "Enter value: ";
			cin >> m_pData[i];
		}
	}

	~MyClass()
	{
		delete[] m_pData;
	}

	int GetSize()
	{
		return m_size;
	}

	int* GetData()
	{
		return m_pData;
	}

	//when copy of object is created we allocate new memory for m_pData
	//and copy each of the elements of the array
	MyClass(const MyClass& obj)
	{
		m_size = obj.m_size;
		m_pData = new int[m_size];
		for (int i = 0; i < m_size; i++)
		{
			m_pData[i] = obj.m_pData[i];
		}
	}

private:

	int m_size;
	int* m_pData;
};

void Print(MyClass obj)
{
	int* pData = obj.GetData();

	cout << "Values inside function Print" << endl;
	for (int i = 0; i < obj.GetSize(); i++)
	{
		cout << pData[i] << endl;
	}
}
int main()
{
	MyClass obj(3);

	//we pass obj by copy, which creates copy of obj inside the function Print.
	//This copy will have the same m_pData value,which means that m_pData in the original object and in the copy
	//will point to the same memory. If the copy is destroyed(which happens at the end of Print) and the
	//destructor is invoked this memory will be released
	//and the original object will have m_pData, which points to deleted memory
	Print(obj);

	//To prevent this we can either implement copy constructor and allocate new memory
	//for m_pData in the copy or to pass objects by reference/pointer and not by copy

	cout << "Values after Print is called" << endl;
	int* pData = obj.GetData();
	for (int i = 0; i < obj.GetSize(); i++)
	{
		cout << pData[i] << endl;
	}

	system("pause");
}