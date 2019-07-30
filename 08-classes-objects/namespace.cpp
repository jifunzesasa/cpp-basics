// namespace.cpp
#include <iostream>

namespace BWString {

const std::string bws = "This is BWString::string";
class string {
	std::string s;
public:
	string ( void ) : s(bws) {};
	string ( const std::string & _s ) : s(bws) {};
	operator std::string & ( void ) { return s; };
};

};	// namespace BWString

BWString::string s1("This is a string");

int main( int argc, char ** argv ) {
	std::string s = s1;
	std::cout << s << std::endl;
	return 0;
}
