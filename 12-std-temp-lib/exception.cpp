// exception.cpp
#include <iostream>
#include <exception>
using namespace std;

class myexception : public exception {
public:
	const char * what() const throw();
};

const char * myexception::what() const throw() {
	return "oh nooo!";
}

void broken() {
	cout << "this is a broken function" << endl;
	throw myexception();
}

int main( int argc, char ** argv ) {
	cout << "let's have an emergency!" << endl;
	broken();
	return 0;
}
