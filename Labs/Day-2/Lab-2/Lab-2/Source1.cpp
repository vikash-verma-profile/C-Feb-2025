#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;


//hotel management
int main5() {
	stack<int, vector<int>> hotelrooms; // to  manage room allocation
	hotelrooms.push(101);
	cout << "Guest Checked into Room 101" << endl;
	hotelrooms.push(102);
	cout << "Guest Checked into Room 102" << endl;
	hotelrooms.push(103);
	cout << "Guest Checked into Room 103" << endl;

	//checking out

	if (!hotelrooms.empty()) {
		cout << "Guest checkout from room " << hotelrooms.top() << endl;
		hotelrooms.pop();
	}
	if (!hotelrooms.empty()) {
		cout << "Guest checkout from room " << hotelrooms.top() << endl;
		hotelrooms.pop();
	}
	if (!hotelrooms.empty()) {
		cout << "Guest checkout from room " << hotelrooms.top() << endl;
		hotelrooms.pop();
	}
	if (hotelrooms.empty()) {
		cout << "All rooms are now vacant";
	}
	return 0;

}