// queue.cpp
#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main( int argc, char ** argv ) {
	cout << "initialize queue from list" << endl;
	list<int> li = {1, 2, 3, 4, 5};
	queue<int, list<int>> ql(li);	// constructor copies to new list

	cout << "li has " << li.size() << " entries; ql has " << ql.size() << " entries." << endl;

	cout << "pop all from ql" << endl;
	while(!ql.empty()) {
		cout << ql.front() << " ";
		ql.pop();
	}
	cout << endl;

	cout << "li has " << li.size() << " entries; ql has " << ql.size() << " entries." << endl;

	cout << "contents of li after ql is emptied:" << endl;
	for(auto it = li.begin(); it != li.end(); it++) {	// auto is C++11 only
		cout << *it << " ";
	}
	cout << endl;

	queue<string> qd;	// default queue uses deque object
	cout << "push strings onto qd" << endl;
	qd.push("one");
	qd.push("two");
	qd.push("three");
	qd.push("four");
	qd.push("five");
	cout << "size of qd: " << qd.size() << endl;
	cout << "pop all from qd" << endl;
	while(!qd.empty()) {
		cout << qd.front() << " ";
		qd.pop();
	}
	cout << endl;
	cout << "size of qd: " << qd.size() << endl;

	return 0;
}
