#include <iostream>
#include <functional>
#include <vector>
#include <numeric>
#include <thread>
#include <mutex>
using namespace std;

vector <int> v;
mutex mtx;

//shared_mutex
//atomic

void addElements() {
	for (int i = 0; i < 10; i++)
	{
		lock_guard<mutex> lock(mtx);
		v.push_back(i);//not thread safe
	}
}
int main()
{

	//plus<int> add;//+
	//minus<int> minus;

	//int a = 10,b = 20;

	//int result = add(a, b);

	//vector<int> v = { 1,2,3,4,5,6 };
	//int sum = std::accumulate(v.begin(), v.end(), 0,plus<int>());;
	//cout << " Total Sum : " << sum;
	//cout << "Sum is " << result;

	/*vector<int> v = { 1,2,3 };
	auto it = v.begin();
	v.erase(it);
	cout << *it;*/
	thread t1(addElements);
	thread t2(addElements);

	t1.join();
	t2.join();

	cout << " Vector size" << v.size();
	return 0;
}