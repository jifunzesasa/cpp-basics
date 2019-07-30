// lambda.cpp
#include <iostream>
#include <algorithm>
#include <locale>
using namespace std;

class fupper {
	char lastc;
public:
	fupper() : lastc(0) {}
	char operator() ( char c );
};

char fupper::operator() ( char c ) {
	if(lastc == ' ' || lastc == 0) {
		lastc = c; return toupper(c);
	} else {
		lastc = c; return tolower(c);
	}
}

int main( int argc, char ** argv ) {
	string s = "big light in sky slated to appear in east";

	transform( s.begin(), s.end(), s.begin(), fupper() );

	cout << s << endl;

	return 0;
}
