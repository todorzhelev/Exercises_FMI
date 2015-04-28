#include<iostream>
#include<string>

using namespace std;

template<typename T>
class Stack
{
public:
	Stack(int size)
	{
		m_size = size;
		m_pData = new T[size];
		m_top = -1;
	}

	~Stack()
	{
		delete[] m_pData;
	}

	void push(T value)
	{
		m_top++;
		m_pData[m_top] = value;
	}

	T pop()
	{
		T value = m_pData[m_top];
		m_top--;
		return value;
	}

	T top();

private:

	T* m_pData;
	int m_size;
	int m_top;
};

//implementation of member function outside of the class
template<typename T>
T Stack<T>::top()
{
	return m_pData[m_top];
}

int main()
{
	//the stack in C++. To use it you have to #include<stack>
	//stack<int> st;
	//st.push(100);
	//st.push(200);
	//st.push(300);

	//cout << st.top() << endl;
	//st.pop();

	//cout << st.top() << endl;
	//st.pop();

	//cout << st.top() << endl;
	//st.pop();

	Stack<int> st(4);

	st.push(2);
	st.push(4);

	cout << st.pop() << endl;

	Stack<string> st1(4);

	st1.push("asdf");
	st1.push("omg");

	cout << st1.pop() << endl;

	system("pause");
}