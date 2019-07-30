// call-by-reference.cpp
#include <iostream>
using namespace std;

int & func( int x, int & y ) {
	return y = x;
}

int main( int argc, char ** argv ) {
	int i = 7;
	int j = 0;

	j = func(45, i);

	printf("i is %d, j is %d\n", i, j);

	return 0;
}

