// new-delete.cpp
#include <iostream>
#include <cstddef>
using namespace std;

const long int count = 100;

int main( int argc, char ** argv ) {
	printf("allocate space for %lu ints at *ip with new\n", count);
	int * ip = new int [count];

	if(ip == NULL) {
		cerr << "new failed." << endl;
		return 1;
	}

	for( int i = 0; i < count; i++ ) {
		ip[i] = i;
	}
	for( int i = 0; i < count; i++ ) {
		printf("%d:%d ", i, ip[i]);
		if((i > 0 && i % 25 == 0) || i == count - 1) cout << endl;
	}

	delete [] ip;
	cout << "space at *ip deleted" << endl;

	return 0;
}
