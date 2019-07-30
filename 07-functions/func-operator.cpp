// func-operator.cpp
#include <iostream>
using namespace std;

class A {
	int a;
public:
	A ( int a ) : a(a) {};
	int value() { return a; }
};

int operator + (A & lhs, A & rhs ) {
	cout << "operator + for class A" << endl;
	return lhs.value() + rhs.value();
}

int main( int argc, char ** argv ) {
	A a(5);
	A b(42);
	cout << "add em up: " << a + b << endl;
	return 0;
}
