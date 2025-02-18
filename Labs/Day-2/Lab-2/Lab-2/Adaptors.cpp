#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

int mai3n() {

	stack<int,vector<int>> s1;
	stack<int, list<int>> s2;
	stack<int, deque<int>> s3;
	stack<int> stack;
	stack.push(41);
	stack.push(42);
	stack.push(34);

	int num = 0;
	stack.push(num);
	stack.pop();
	stack.pop();
	stack.pop();

	while (!stack.empty()) {
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << stack.size();
	return 0;
}