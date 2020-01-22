#pragma once
#include "tVector.h"

template <typename T>
class tQueue
{
	tVector<T> vec;

public:
	tQueue()                             // default initializes the queue
	{
		vec = new tQueue();
	}

	tQueue(size_t count, const T& value)	// constructs a queue with the given number of elements, each element is initialized by copying the given value 
	{
		vec = new tQueue();
		vec.arrSize = count;
		for (int i = 0; i < count; ++i)
		{
			vec[i] = value;
		}
	}

	void push(const T& value)	// adds an element to the top of the Queue
	{
		vec.push_back(value);
	}

	void pop()	// drops the bottom-most element of the Queue
	{
		for (int i = 0; i < vec.size(); ++i)
		{
			vec[i] = vec[i + 1];
		}
		vec.pop_back();
	}

	T& front()	// returns the front-most element
	{
		return vec[0];
	}

	size_t size() const  // returns current number of elements
	{
		return vec.size();
	}
};