#pragma once
#include <iostream>
#include <vector>

template <typename T>
class tVector
{
	const static size_t GROWTH_FACTOR = 2;

	T* arr;
	size_t arrSize;
	size_t arrCapacity;

public:
	tVector()
	{
		arrSize = 0;
		arrCapacity = 5;
	}
	~tVector(){	}

	T* data()
	{
		return arr;
	}

	void reserve(size_t newCapacity)
	{

	}

	void push_back(const T &value)
	{

	}

	void pop_back()
	{

	}

	T &at(size_t index)
	{

	}

	size_t size() const
	{
		
	}

	size_t capacity() const
	{

	}
};

