// references.cpp
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	int i = 5;
	int & ir = i;
	ir = 10;
	printf("i is %d\n", i);
	return 0;
}
