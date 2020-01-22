#include "tVector.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	tVector<int> original;

	original.push_back(2);
	original.push_back(3);
	original.push_back(5);

	tVector<int> copy = original;

	copy.pop_back(); // removes from the copy array, but not the original
	copy.pop_back();
	copy.pop_back();

	for (size_t i = 0; i < original.size(); ++i)
	{
		cout << original[i] << endl;
	}

	for (size_t i = 0; i < copy.size(); ++i)
	{
		cout << copy[i] << endl;
	}

	cout << "\n" << original.empty() << endl;
	cout << "\n" << copy.empty() << endl;

	cout << copy.capacity();

	while (true) {}

	return 0;
}