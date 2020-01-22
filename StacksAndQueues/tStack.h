#include "tVector.h"
#pragma once

template <typename T>
class tStack
{
	tVector<T> vec;	// contains the data for a stack

public:
	tStack()	// initializes the stack's default values
	{
		vec = new tVector();
	}

	void push(const T& value)	// adds an element to the top of the Stack
	{
		vec.push_back(value);
	}

	void pop()	// drops the top-most element of the Stack
	{
		vec.pop_back();
	}

	T& top()	// returns the top-most element at the given element
	{
		return vec[vec.size() - 1];
	}

	size_t size() const	
	{
		return vec.size();
	}

	const T& top() const // returns the top-most element at the given element (const-qualified)
	{
		return vec[vec.size() - 1];
	}

	bool empty() const
	{
		vec.empty();
	}
};