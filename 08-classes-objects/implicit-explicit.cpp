// implicit-explicit.cpp
#include <iostream>

const std::size_t maxlen = 1024;	// maximum length of bwString

class BWSize {
	std::size_t _size;
public:
	BWSize(std::size_t);	// constructor: size from int
	BWSize(const char *);	// constructor: size from c-string
	std::size_t size() const;
};

BWSize::BWSize(const std::size_t n) {
	std::cout << "BWSize from int" << std::endl;
	_size = (n <= maxlen) ? n : 0;
}

BWSize::BWSize(const char * s) {
	std::cout << "constructor: BWSize from c-string" << std::endl;
	for(std::size_t i = 0; i < maxlen; i++) {
		if(s[i] == '\0') {
			_size = i;
			return;
		}
	}
	_size = 0;
}

std::size_t BWSize::size() const {
	return _size;
}

using namespace std;

void func(const BWSize & s) {
	cout << "s.size() is " << s.size() << endl;
}

int main( int argc, char ** argv ) {
	BWSize s = 'x';
	cout << "s.size() is " << s.size() << endl;
	func('x');
	return 0;
}

