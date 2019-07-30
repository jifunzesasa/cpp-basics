// c-strings.cpp
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	char cstring[] = "String";

	cout << cstring << endl;

	for( unsigned int i = 0; cstring[i]; i++) {
		printf("%02d: %c\n", i, cstring[i]);
	}
	return 0;
}
