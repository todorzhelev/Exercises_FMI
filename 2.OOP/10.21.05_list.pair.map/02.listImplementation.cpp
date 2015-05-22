#include<iostream>

using namespace std;

template<typename T> 
class List
{
public:
	List()
	{
		m_tail = m_head = nullptr;
	}
	struct Node
	{
		Node(T value)
		{
			m_value = value;
			m_next = nullptr;
		}
		T m_value;
		Node* m_next;
	};

	void push_front(T value)
	{
		if (m_head == nullptr)
		{
			m_head = new Node(value);
			m_tail = m_head;
		}
		else
		{
			Node* temp = new Node(value);
			temp->m_next = m_head;
			m_head = temp;
		}

		m_size++;
	}

	void pop_front()
	{
		if (m_head == nullptr)
		{
			return;
		}
		else if (m_head == m_tail)
		{
			delete m_head;
			m_head = m_tail = nullptr;
		}
		else
		{
			Node* temp = m_head;
			m_head = m_head->m_next;
			delete temp;
		}
		m_size--;
	}

	void push_back(T value)
	{
		if (m_tail == nullptr)
		{
			m_head = new Node(value);
			m_tail = m_head;
		}
		else
		{
			Node* temp = new Node(value);
			m_tail->m_next = temp;
			m_tail = temp;
		}
		m_size++;
	}

	T& front()
	{
		return m_head->m_value;
	}

	T& back()
	{
		return m_tail->m_value;
	}

	class iterator
	{
	public:
		iterator(Node* data)
		{
			m_data = data;
		}

		T operator*()
		{
			return m_data->m_value;
		}

		iterator operator++()
		{
			m_data = m_data->m_next;
			iterator temp(m_data);
			return temp;
		}

		bool operator!=(iterator& it1)
		{
			return m_data != it1.m_data;
		}

		Node* m_data;
	};

	iterator begin()
	{
		iterator it(m_head);
		return it;
	}

	iterator end()
	{
		iterator it(m_tail->m_next);
		return it;
	}

	int size()
	{
		return m_size;
	}


private:
	Node* m_head;
	Node* m_tail;
	int m_size;
};
int main()
{
	List<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(100);
	l.push_back(12);
	l.push_front(4);

	cout << l.front() << endl;
	cout << l.back() << endl;

	for (List<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}


	system("pause");
}