#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1 = { 1 ,2,3,4 };

	//decalre an irerator
	vector<int>::iterator i1;

	
	/*vector<int>::iterator i2;
	for (i2 = v1.begin();  i2 != v1.end(); ++i2)
	{
		*i2 = 1;
	}*/
	for (i1 = v1.begin(); i1 != v1.end(); ++i1)
	{
		*i1 = 1;
		cout << (*i1) << " ";
	}
	return 0;
}