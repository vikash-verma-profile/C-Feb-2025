#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;



int main6() {

	/*
	//Sets
	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(90);
	s.insert(50);
	s.insert(60);

	//s.erase(s.begin(),s.find(50));

	//for (auto&s1:s )
	//{
	//	cout << s1 << ' ';
	//}
	//maps
	map<string, int> mp;
	mp["b"] = 1;
	mp["c"] = 2;
	mp["a"] = 3;
	mp["a"] = 5;
	for (auto &k: mp)
	{
		cout <<"Key: "<< k.first << ", Value: "<< k.second << endl;
	}
	*/

	//multiset
	//help us descending order
	multiset<int, greater<int>> samplems;
	multiset<vector<int>> samplemsV;
	samplemsV.insert({1,2,3});
	samplems.insert(30);
	samplems.insert(60);
	samplems.insert(80);
	samplems.insert(90);
	samplems.insert(60);

	for (auto &value:samplems )
	{
		cout << value << " ";
	}
	return 0;

}