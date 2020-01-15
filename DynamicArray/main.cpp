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

	original.pop_back();

	for (int i = 0; i < original.size; ++i)
	{
		cout << original.at(i) << endl;
	}

	while (true) {}

	return 0;
}