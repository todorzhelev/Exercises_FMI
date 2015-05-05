#include<iostream>

using namespace std;

template<typename T>
class List
{
public:

	struct Node
	{
		Node(T value) : m_value(value), m_pNext(nullptr) {}
		T m_value;
		Node* m_pNext;
	};

	List()
	{
		m_pHead = m_pTail = nullptr;
		m_size = 0;
	}

	void push_front(T value)
	{
		if (m_pHead == nullptr)
		{
			m_pHead = new Node(value);
			m_pTail = m_pHead;
		}
		else
		{
			Node* temp = new Node(value);
			temp->m_pNext = m_pHead;
			m_pHead = temp;
		}

		m_size++;
	}

	void push_back(T value)
	{
		if (m_pHead == nullptr)
		{
			m_pHead = new Node(value);
			m_pTail = m_pHead;
		}
		else
		{
			Node* temp = new Node(value);
			m_pTail->m_pNext = temp;
			m_pTail = temp;
		}

		m_size++;
	}

public:

	int m_size;
	Node* m_pHead;
	Node* m_pTail;
};