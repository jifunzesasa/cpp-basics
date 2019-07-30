// void-type.cpp
#include <iostream>
using namespace std;

void func( void );

int main( int argc, char ** argv ) {
	cout << "void-type.c" << endl;
	func();
	return 0;
}

void func ( void ) {
	cout << "this is func()" << endl;
}

