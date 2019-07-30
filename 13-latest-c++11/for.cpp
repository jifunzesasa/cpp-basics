// for.cpp
#include <iostream>
#include <vector>
using namespace std;

int main( int argc, char ** argv ) {
	int ia[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int> iv(ia, ia + ( sizeof(ia) / sizeof(int) ) );

	for( int i : ia ) {
		cout << i << " ";
	}
	cout << endl;

	for( int i : iv ) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
