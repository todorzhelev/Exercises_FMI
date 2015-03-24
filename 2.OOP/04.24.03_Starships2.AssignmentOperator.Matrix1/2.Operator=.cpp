#include<iostream>

using namespace std;

//Usually it is not needed to overload the operator for assignment.
//When we have allocated memory in certain class and we assign one object to another
//we have to overload the operator, to prevent problems.
class MyClass
{
public:
	MyClass(int size)
	{
		m_pData = new int[size];
		m_size = size;

		//initializes the elements of the array with i
		for (int i = 0; i < size; i++)
		{
			m_pData[i] = i;
		}
	}

	~MyClass()
	{
		delete[] m_pData;
	}

	MyClass& operator=(const MyClass& obj)
	{
		//this is constant pointer to the object, which calls the member-function.
		//Its form is MyClass * const this
		//In the if we check if the address of the object, which calls operator=
		//is the same as the address of obj, which prevents this situation - obj = obj;
		//(i.e. when we want to assign one object to itself)
		if (this != &obj)
		{
			//imagine that we have obj1 = obj2;
			//to perform this we have to first delete the memory
			//allocated in obj1, allocate memory for the elements in obj1
			//then copy the elements from obj2 to obj1
			delete[]m_pData;
			m_size = obj.m_size;

			m_pData = new int[obj.m_size];
			for (int i = 0; i < obj.m_size; i++)
			{
				m_pData[i] = obj.m_pData[i];
			}
		}

		//at the end we return the object, which called the function
		//note that we return it by reference, otherwise copy constructor will be called
		return *this;
	}

	int m_size;
	int* m_pData;
};

int main()
{
	MyClass obj1(3);

	{
		MyClass obj2(5);

		//this is similar to 
		//obj2.m_size = obj1.m_size;
		//obj2.m_pData = obj1.m_pData; - note that the addresses of the pointers are copied
		obj2 = obj1;
	
	
	}//obj2 will be destroyed here, since it is local variable for this scope
	 //this will call the destructor of obj2 and will delete the memory
	 //allocated by obj1.m_pData, unless operator= is overloaded
	
	//if operator= is not overloaded this will print wrong values
	for (int i = 0; i < obj1.m_size; i++)
	{
		cout << obj1.m_pData[i] << endl;
	}
	
	system("pause");
}