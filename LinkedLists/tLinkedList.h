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
		if (original.head == nullptr)
		{
			head = nullptr;
		}
		else
		{
			head = new Node(original.head->data);
			Node* current = head;
			Node* originalCurr = original.head;
			while (originalCurr->next != nullptr)
			{
				current->next = new Node(originalCurr->next->data);
				originalCurr = originalCurr->next;
				current = current->next;
			}
		}
	}

	tForwardList& operator=(const tForwardList &rhs)		// copy-assignment
	{

	}

	void push_front(const T& val)							// adds element to front (head)
	{
		Node* n = new Node;
		n->data = val;
		n->next = head;
		head = n;
	}

	void pop_front()										// removes element from front
	{
		if (head == nullptr)
		{
			cout << "List is empty" << endl;

			return;
		}

		else if (head->next == nullptr)
		{
			cout << "List cannot be made empty" << endl;

			return;
		}

		else
		{
			h->data = h->next->data;

			n = head->next;

			head->next = head->next->next;

			delete(n);

			return;
		}
	}

	T& front()												// returns element at front
	{
		return head->data;
	}

	const T& front() const									// returns element at front (const)
	{
		return head->data;
	}

	void remove(const T& val)								// remove elements equal to given value					
	{
		if (head->data == val || head == nullptr)
		{
			pop_front();
		}

		Node* n = head;
		
		while (head->next != nullptr)
		{
			if (n->next->data == val)
			{
				Node* del = n->next;
				n->next = n->next->next;
				delete(del);
			}
			n = n->next;
		}
	}
};

