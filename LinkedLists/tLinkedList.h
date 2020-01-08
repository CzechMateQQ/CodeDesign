#pragma once

template<typename T>
class tForwardList
{
	struct Node
	{
		T data;			// data for the element stored
		Node* next;		// pointer to node following this node
	};

	Node* head;			// pointer to head of linked list

public:
	tForwardList()											// initializes head to null
	{
		head = nullptr;
	}

	~tForwardList(){}

	tForwardList(const tForwardList& original)					// copy-constructor
	{
		if (original.head = nullptr)
		{
			head = nullptr;
		}
		else
		{
			head = new Node(original.head->data);
			Node* current = head;
			Node* originalHead = original.head;
			Node* currentOriginal = originalHead;
			while (currentOriginal->next != nullptr)
			{
				current->next = new Node(currentOriginal->next->data);
				currentOriginal = currentOriginal->next;
				current = current->next;
			}
		}
	}

	tForwardList& operator=(const tForwardList &rhs)		// copy-assignment
	{

	}

	void push_front(const T& val)							// adds element to front (head)
	{

	}

	void pop_front()										// removes element from front
	{

	}

	T& front()												// returns element at front
	{

	}

	const T& front() const									// returns element at front (const)
	{

	}

	void remove(const T& val)								// remove elements equal to given value					
	{

	}
};

