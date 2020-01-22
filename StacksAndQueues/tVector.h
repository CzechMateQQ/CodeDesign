#pragma once
#include <iostream>
#include <vector>

template <typename T>
class tVector
{
public:
	const static size_t GROWTH_FACTOR = 2;

	T* arr;
	size_t arrSize;
	size_t arrCapacity;

	tVector()
	{
		arrSize = 0;
		arrCapacity = 5;
		arr = new T[arrCapacity];
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

	~tVector() {	}

	T* data()
	{
		return arr;
	}

	void reserve(size_t newCapacity)
	{
		T* _arr = new T[newCapacity];
		for (int i = 0; i < arrCapacity; ++i)
		{
			_arr[i] = arr[i];
		}
		arrCapacity = newCapacity;
		delete[] arr;
		arr = _arr;
	}

	void push_back(const T &value)
	{
		if (arrSize >= arrCapacity)
		{
			reserve(arrSize * 2);
		}
		arr[size()] = value;
		arrSize++;
	}

	void pop_back()
	{
		arr[arrSize - 1] = NULL;
		arrSize--;
	}

	T &at(size_t index)
	{
		return arr[index];
	}

	size_t size() const
	{
		return arrSize;
	}

	size_t capacity() const
	{
		return arrCapacity;
	}

	T& operator[] (size_t index)	// returns the object at the given index
	{
		//return arr.at(index);
		return arr[index];
	}

	bool empty() const   // Returns true if the vector contains no elements
	{
		if (arr[0] == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void resize(size_t _size)  // Resizes the vector to contain the given number of elements
	{
		arrSize = _size;
	}

	void shrink_to_fit() // Resizes the vector's capacity to match its size.
	{
		arrCapacity = arrSize;
	}

	void clear()         // Empties the vector (all elements are destroyed in this process)
	{

	}
};