// integral-types.cpp
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	char c;
	short int si;
	int i;
	long int li;
	long long int lli;

	cout << "size of char c is " << sizeof(c) << endl;
	cout << "size of short int si is " << sizeof(si) << endl;
	cout << "size of int i is " << sizeof(i) << endl;
	cout << "size of long int li is " << sizeof(li) << endl;
	cout << "size of long long int lli is " << sizeof(lli) << endl;

	printf("c = 127\n");
	c = 127;
	printf("c is %d\n", c);
	c++;
	printf("after increment, c is %d\n", c);

	return 0;
}
