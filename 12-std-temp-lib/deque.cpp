// deque.cpp
#include <iostream>
#include <deque>
using namespace std;

int main( int argc, char ** argv ) {
	// from initializer list (C++11)
	cout << "deque from initializer list (C++11): " << endl;
	deque<int> dq1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "size: " << dq1.size() << endl;
	cout << "front: " << dq1.front() << endl;
	cout << "back: " << dq1.back() << endl;
	cout << "insert 42 at begin + 5: " << endl;
	dq1.insert(dq1.begin() + 5, 42);
	cout << "size: " << dq1.size() << endl;
	cout << "dq1[5]: " << dq1[5] << endl;
	cout << "erase at begin + 5: " << endl;
	dq1.erase(dq1.begin() + 5);
	cout << "size: " << dq1.size() << endl;
	cout << "dq1[5]: " << dq1[5] << endl;

	cout << "push_back 47: " << endl;
	dq1.push_back(47);
	cout << "size: " << dq1.size() << endl;
	cout << "dq1.back() " << dq1.back() << endl;

	cout << "push_front 192: " << endl;
	dq1.push_front(192);
	cout << "size: " << dq1.size() << endl;
	cout << "dq1.front() " << dq1.front() << endl;

	// range-based iterator (C++11)
	cout << "range-based iterator (C++11): " << endl;
	for(int & v : dq1) {
		cout << v << " ";
	}
	cout << endl << endl;

	cout << "dq1.pop_front() " << endl;
	dq1.pop_front();
	cout << "size: " << dq1.size() << endl;
	cout << "dq1.pop_back() " << endl;
	dq1.pop_back();
	cout << "size: " << dq1.size() << endl;
	for(int & v : dq1) {
		cout << v << " ";
	}

	return 0;
}
