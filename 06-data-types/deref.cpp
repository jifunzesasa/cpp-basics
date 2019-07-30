// deref.cpp
#include <iostream>
using namespace std;

struct S {
	int a;
	int b;
	int c;
};

int main( int argc, char ** argv ) {
	struct S s = { 1, 2, 3 };
	printf("s has members a: %d, b: %d, c: %d\n", s.a, s.b, s.c);
	return 0;
}
