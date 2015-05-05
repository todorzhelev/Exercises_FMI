#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Vector
{
public:

	Vector(int capacity = 1)
	{
		m_capacity = capacity;
		m_size = 0;
		m_pData = new T[capacity];
	}

	void push_back(T value)
	{
		if (m_size == m_capacity)
		{
			resize();
		}

		m_pData[m_size] = value;
		m_size++;
	}

	void resize()
	{
		int newCapacity = m_capacity*2;
		T* temp = new T[newCapacity];

		for (int i = 0; i < m_size; i++)
		{
			temp[i] = m_pData[i];
		}

		delete[] m_pData;
		m_pData = temp;
		m_capacity = newCapacity;
	}

	void pop_back()
	{
		m_size--;
	}

	T& back()
	{
		return m_pData[m_size - 1];
	}

	T& front()
	{
		return m_pData[0];
	}

	//if it is not reference it will make copy
	//and we cant write v[5] = 100;
	T& operator[](int index)
	{
		return m_pData[index];
	}

	int size()
	{
		return m_size;
	}

	class iterator
	{
	public:

		//m_v must be initialialized in the initialization list
		iterator(Vector& v, int index) :m_v(v), m_index(index)
		{
			m_index = index;
		}

		T& operator*()
		{
			return m_v[m_index];
		}

		iterator operator++()
		{
			m_index++;
			iterator it(m_v, m_index);
			return it;
		}

		bool operator!=(const iterator& it)
		{
			return m_index != it.m_index;
		}

	private:

		Vector& m_v;
		int m_index;
	};

	iterator begin()
	{
		iterator it(*this, 0);
		return it;
	}

	iterator end()
	{
		iterator it(*this, m_size);
		return it;
	}

private:

	int m_capacity;
	int m_size;
	T* m_pData;
};

int main()
{
	Vector<int> v;
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);

	for (Vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}

	cout << endl;

	Vector<string> v1;
	v1.push_back("qwerty");
	v1.push_back("asdf");

	cout << v1.back() << endl;
	cout << v1.front() << endl;

	for (auto it = v1.begin(); it != v1.end(); ++it)
	{
		cout << *it << " ";
	}

	cout << endl;

	system("pause");
}