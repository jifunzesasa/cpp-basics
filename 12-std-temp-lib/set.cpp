// set.cpp
#include <iostream>
#include <set>

using namespace std;

int main( int argc, char ** argv ) {
	cout << "set of strings from initializer list (C++11): " << endl;
	set<string> strset = { "one", "two", "three", "four", "five" };
	cout << "size: " << strset.size() << endl;
	for(string s : strset) {
		cout << s << " ";
	}
	cout << endl << endl;

	cout << "insert element \"six\"" << endl;
	strset.insert("six");
	for(string s : strset) {
		cout << s << " ";
	}
	cout << endl << endl;

	cout << "insert duplicate element \"five\"" << endl;
	strset.insert("five");
	for(string s : strset) {
		cout << s << " ";
	}
	cout << endl << endl;

	cout << "find and erase element \"six\"" << endl;
	set<string>::iterator it = strset.find("six");
	if(it != strset.end()) {
		cout << "found " << *it << endl;
		strset.erase(it);
	} else {
		cout << "not found" << endl;
	}
	for(string s : strset) {
		cout << s << " ";
	}
	cout << endl << endl;

	return 0;
}
