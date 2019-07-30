// version-test.cpp

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main( int argc, char ** argv ) {
	stringstream version;
	version << "GCC version: "
			<< __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__
			<< "\nVersion string: " << __VERSION__;

	cout << version.str() << endl;

//	vector<string> v = { "one", "two", "three" }; // C++11 feature - initializer list
//
//	for( string s : v ) {	// C++11 feature - range-based for loop
//		cout << s << endl;
//	}

	return 0;
}
