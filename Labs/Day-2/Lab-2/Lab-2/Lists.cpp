#include <iostream>
#include <list>
using namespace std;

int main2() {
	list<int> samplelist{ 12,24,23,12 };
	/*for (auto i : samplelist)
	{
		cout << i << ' ';
	}*/

	list<int> list2;

	for (int i = 0; i < 10; i++)
	{
		list2.push_back(12);
		list2.push_front(10);
	}
	list2.pop_back();
	list2.pop_front();
	list2.reverse();
	list2.sort();
	//list2.clear();
	list2.remove(10);
	if (list2.empty()) {
		cout << "list is  empty";
	}
	else {
		cout << "list is  not empty";
	}
	for (auto i : list2)
	{
		cout << i << ' ';
	}
	return 0;
}