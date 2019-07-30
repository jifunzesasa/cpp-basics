// cpp-strings.cpp
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	string cppstring = "This is a C++ string.";

	cout << cppstring << endl;

	for( unsigned int i = 0; cppstring[i]; i++) {
		printf("%02d: %c\n", i, cppstring[i]);
	}

	return 0;
}
