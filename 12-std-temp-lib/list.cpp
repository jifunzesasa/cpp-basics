// list.cpp
#include <iostream>
#include <list>
using namespace std;

int main( int argc, char ** argv ) {
	const static int size = 10;

	// from initializer list (C++11)
	cout << "list of ints from initializer list (C++11): " << endl;
	list<int> li1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "size: " << li1.size() << endl;
	cout << "front: " << li1.front() << endl;
	cout << "back: " << li1.back() << endl;

	cout << "push_back 47: " << endl;
	li1.push_back(47);
	cout << "size: " << li1.size() << endl;
	cout << "back() " << li1.back() << endl;

	// range-based iterator (C++11)
	cout << "range-based iterator (C++11): " << endl;
	for(int & v : li1) {
		cout << v << " ";
	}
	cout << endl << endl;

	// need an iterator to insert and erase
	list<int>::iterator it1 = li1.begin();
	list<int>::iterator it2 = li1.begin();
	while(*++it1 != 5);
	cout << "insert 112 before 5 " << endl;
	li1.insert(it1, 112);

	while(*++it1 != 7);
	cout << "erase 7 " << endl;
	li1.erase(it1);

	for(int & v : li1)  cout << v << " ";
	cout << endl << endl;

	cout << "erase 112 to 8 " << endl;
	it1 = it2 = li1.begin();
	while( ( *++it1 != 112) && (it1 != li1.end() ) );
	while( ( *++it2 != 8) && (it2 != li1.end() ) );
	cout << *it1 << " " << *it2 << endl;
	li1.erase(it1, it2);
	for(int & v : li1)  cout << v << " ";
	cout << endl << endl;

	// from C-array
	cout << "list from C-array: " << endl;
	int ia[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	list<int> li2(ia, ia + size);
	for(int v : li2)  cout << v << " ";
	cout << endl << endl;

	// from argc/argv list
	cout << "list of strings, from argc/argv list: " << endl;
	list<string> args(argv, argv + argc);

	// pop all from the beginning of the list
	cout << "while pop" << endl;
	while(args.size() > 0) {
		cout << args.front() << endl;
		args.pop_front();
	}
	cout << endl;

	return 0;
}
