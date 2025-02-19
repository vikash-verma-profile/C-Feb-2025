#include <iostream>
#include <vector>

using namespace std;

int main1()
{
	vector<int> v1 = {10,20,30,50};
	vector<int>::iterator it;
	cout << "Original Vector";

	for (it =v1.begin(); it != v1.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << "\n";
	for (it = v1.begin(); it != v1.end(); ++it)
	{
		*it += 5;
	}
	cout << "Original Vector";
	for (it = v1.begin(); it != v1.end(); ++it)
	{
		cout << *it << " ";
	}
	return 0;
}