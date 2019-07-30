// new-delete.cpp
#include <iostream>
using namespace std;

class A {
	int _a;
	int _b;
	int _c;
public:
	A( int );
	~A();
	int a() { return _a; }
	int b() { return _b; }
	int c() { return _c; }
};

A::A( int i = 0 ) : _a(i), _b(i + 1), _c(i + 2) {
	cout << "A constructor called" << endl;
}

A::~A() {
	cout << "A destructor called" << endl;
}

int main( int argc, char ** argv ) {
	cout << "allocating space for one A object" << endl;
	A * a = new (nothrow) A;
	if(a == nullptr) {
		cerr << "new A failed." << endl;
		return 1;
	}
	printf("a: %d, %d, %d\n", a->a(), a->b(), a->c());
	delete a;
	cout << "space for A object deleted" << endl;

	return 0;
}
