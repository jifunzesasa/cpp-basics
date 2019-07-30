// map.cpp
#include <iostream>
#include <map>

using namespace std;

int main( int argc, char ** argv ) {
	cout << "map of strings from initializer list (C++11): " << endl;
	map<string, string> strmap = { { "George", "Father" }, { "Ellen", "Mother" },
			{ "Ruth", "Daughter" }, { "Spike", "Neighbor's Son" } };
	map<string, string>::iterator it;	// will use throughout

	cout << "size is " << strmap.size() << endl;
	cout << "check a couple of key/value pairs" << endl;
	cout << "George is " << strmap["George"] << endl;
	cout << "Ellen is " << strmap.find("Ellen")->second << endl;
	cout << endl;

	cout << "iterate the set" << endl;
	for( it = strmap.begin(); it != strmap.end() ; it++ ) {
		cout << it->first << " is " << it->second << endl;
	}
	cout << endl;

	cout << "insert an element" << endl;
	// strmap.insert( pair<string, string>("Luke", "Neighbor") );	// pre-C++11
	strmap.insert( { "Luke", "Neighbor" } );	// initializer list (C++11)
	cout << "inserted - size is " << strmap.size() << endl;
	for( it = strmap.begin(); it != strmap.end() ; it++ ) {
		cout << it->first << " is " << it->second << endl;
	}
	cout << endl;

	cout << "insert a duplicate" << endl;
	strmap.insert( { "Luke", "Neighbor" } );
	cout << "after insert size is " << strmap.size() << endl;
	for( it = strmap.begin(); it != strmap.end() ; it++ ) {
		cout << it->first << " is " << it->second << endl;
	}
	cout << endl;

	cout << "find and erase an element" << endl;
	it = strmap.find("Luke");
	if(it != strmap.end()) {
		cout << "found " << it->first << ":" << it->second << endl;
		strmap.erase(it);
		cout << "erased - size is " << strmap.size() << endl;
	} else {
		cout << "not found" << endl;
	}
	for( it = strmap.begin(); it != strmap.end() ; it++ ) {
		cout << it->first << " is " << it->second << endl;
	}
	cout << endl;

	return 0;
}
