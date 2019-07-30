// iterator.cpp
#include <iostream>
#include <vector>
using namespace std;

int main( int argc, char ** argv ) {
	// from initializer list (C++11)
	cout << "vector from initializer list (C++11): " << endl;
	vector<int> vi1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int>::iterator it;	// vector iterator

	vector<int>::iterator beginning = vi1.begin(); // save for later

	// input iterator
	for(it = vi1.begin(); it < vi1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// forward iterator allows re-iteration of same set with same results
	// use beginning value saved before previous iteration
	for(it = beginning; it < vi1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// bidirectional iterator -- iterate backwards
	// allows it--
	for(it -= 1; it >= beginning; it--) {
		cout << *it << " ";
	}
	cout << endl;

	// random access iterator
	// allows += and -= access
	it = beginning + 7;
	cout << *it << " ";
	it -= 3;
	cout << *it << " ";
	it += 4;
	cout << *it << " ";
	cout << endl;

	// output iterator
	// may write to object via iterator
	for(it = beginning; it < vi1.end(); it++) {
		*it = 0;
	}
	for(it = beginning; it < vi1.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}
