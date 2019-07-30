// class.cpp
#include <iostream>
using namespace std;

// a very simple class
class Class1 {
	int i;
public:
	void setValue( int value ) { i = value; }
	int getValue() { return i; }
};

int main( int argc, char ** argv ) {
	int i = 47;
	Class1 object1;

	object1.setValue(i);
	cout << "value is " << object1.getValue() << endl;
	return 0;
}

