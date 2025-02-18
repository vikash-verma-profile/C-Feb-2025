#include <iostream>
#include <Vector>
using namespace std;

void printV(vector<int> &v) {
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}
int main() {
	vector<int> v1;
	vector<int> v2 = { 1,2,3,4,5 };

	vector<int> v3(5, 1);
	v1.push_back(1);
	v1.pop_back();
	v2.erase(find(v2.begin(), v2.end(), 5));
	v2.push_back(6);
	v2.insert(v2.begin()+1,10);
	//v1[0] = 2;
	//v1.at(1) = 3;
	cout << v2[3]; //4
	cout << "\n";
	cout << v2.at(3);//4
	cout << "Printing V1===> \n";
	printV(v1);//blank
	cout << "\n";
	printV(v2);//1 2 3 4 5
	cout << "\n";
	printV(v3); //9 9 9 9 9
	
	return 0;
}