#include <iostream>
#include <unordered_map>

using namespace std;


void printGuests(unordered_multimap<int,string> &hotel) {
	for (auto it = hotel.begin(); it != hotel.end(); it++)
	{
		cout << "Room Number: " << it->first << " -Guest: " << it->second << endl;
	}
}

//hotel management
int main7() {
	unordered_multimap<int, string> hotel;

	hotel.insert(make_pair(101,"Vikash Verma"));
	hotel.insert(make_pair(102, "Rakesh Sharma"));
	hotel.insert(make_pair(103, "Mike"));
	hotel.insert(make_pair(104, "John"));
	cout << "Guests in the hotel";
	printGuests(hotel);
	cout << hotel.size() << endl;
	int checkRoom = 101;

	if (hotel.find(checkRoom) == hotel.end()) {
		cout << "\n Room " << checkRoom << " is now empty \n";
	}
	else {
		cout << "\n Room " << checkRoom << " is occupied \n";
	}
	return 0;
}