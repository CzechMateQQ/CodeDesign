
#include "tLinkedList.h"

int main()
{
	tForwardList<int> test;

	test.push_front(3);
	test.push_front(5);
	test.push_front(8);
	test.push_front(5);
	test.push_front(1);
	test.push_front(2);

	test.pop_front();
	test.remove(5);
	cout << test.front() << endl;

	test.printList();

	while(true){}

	return 0;
}