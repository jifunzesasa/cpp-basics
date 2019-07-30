// stack.cpp
#include <iostream>
#include <stack>
#include <list>
using namespace std;

int main( int argc, char ** argv ) {
	cout << "initialize queue from list" << endl;
	list<int> li = { 1, 2, 3, 4, 5 }; // initializer list is C++11 only
	stack<int, list<int>> sl(li);	// constructor copies to new list

	cout << "li has " << li.size() << " entries; sl has " << sl.size() << " entries." << endl;

	cout << "pop all from sl" << endl;
	while(!sl.empty()) {
		cout << sl.top() << " ";
		sl.pop();
	}
	cout << endl;

	cout << "li has " << li.size() << " entries; sl has " << sl.size() << " entries." << endl;

	cout << "contents of li after sl is emptied:" << endl;
	for( int i : li ) {	// range-based for loop is C++11 only
		cout << i << " ";
	}

	cout << endl;

	stack<string> sd;	// default stack uses deque object
	cout << "push strings onto sd" << endl;
	sd.push("one");
	sd.push("two");
	sd.push("three");
	sd.push("four");
	sd.push("five");
	cout << "size of sd: " << sd.size() << endl;
	cout << "pop all from sd" << endl;
	while(!sd.empty()) {
		cout << sd.top() << " ";
		sd.pop();
	}
	cout << endl;
	cout << "size of sd: " << sd.size() << endl;

	return 0;
}
