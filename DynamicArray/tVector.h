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

	tVector(const tVector &vec)
	{
		arrSize = vec.arrSize;
		arrCapacity = vec.arrCapacity;
		arr = new T[vec.arrCapacity];

		for (int i = 0; i < arrSize; ++i)
		{
			arr[i] = vec.arr[i];
		}
	}

	tVector& operator=(const tVector &vec)
	{
		this->arrSize = vec.arrSize;
		this->arrCapacity = vec.arrCapacity;

		delete[] arr;

		arr = new T[vec.arrCapacity];

		for (int i = 0; i < arrSize; ++i)
		{
			arr[i] = vec.arr[i];
		}
	}

	~tVector(){	}

	T* data()
	{
		return arr;
	}

	void reserve(size_t newCapacity)
	{
		T _arr = new T[newCapacity];
		for (int i = 0; i < arrCapacity; ++i)
		{
			_arr[i] = arr[i];
		}
		arrCapacity = newCapacity;
		delete[] arr;
		arr = _arr;
		delete[] _arr;
	}

	void push_back(const T &value)
	{
		if (arrSize >= arrCapacity)
		{
			arr.reserve(arrSize * 2);
		}
		arr[arr.size()] = value;
		arrSize++;
	}

	void pop_back()
	{
		arr[arr.size() - 1] = nullptr;
		arrSize--;
	}

	T &at(size_t index)
	{
		return arr[index];
	}

	size_t size() const
	{
		
	}

	size_t capacity() const
	{

	}
};

