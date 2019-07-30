// exceptions.cpp
#include <iostream>
#include <exception>
using namespace std;

static string unk = "unknown";
static string clone_prefix = "clone-";

class E : public exception {
	const char * msg;
	E(){};
public:
	E(const char * s) throw() : msg(s) {}
	const char * what() const throw() { return msg; }
};

class Animal {
	string _type;
	string _name;
	string _sound;
public:
	Animal();	// default constructor
	explicit Animal(const string & type, const string & name, const string & sound);

	Animal(const Animal &);	// copy constructor
	Animal & operator=(const Animal &);	// copy operator
	~Animal();	// destructor
	void print() const;
};

Animal::Animal() : _type(unk), _name(unk), _sound(unk) {
	cout << "default constructor" << endl;
}

Animal::Animal(const string & type, const string & name, const string & sound)
: _type(type), _name(name), _sound(sound) {
	if(type.length() == 0 || name.length() == 0 || sound.length() == 0) {
		throw E("Insufficient parameters");
	}
	cout << "constructor with parameters" << endl;
}

Animal::Animal(const Animal & a) {
	cout << "copy constructor" << endl;
	_type = a._type;
	_sound = a._sound;
	_name = clone_prefix + a._name;
}

Animal::~Animal() {
	cout << "destructor: "
			<< _name << " the " << _type
			<< endl;
}

void Animal::print () const {
	cout << _name << " the " << _type
			<< " says " << _sound << endl;
}

Animal & Animal::operator=(const Animal & o) {
	cout << "assignment operator" << endl;
	if(this != &o) {
		_type = o._type;
		_name = clone_prefix + o._name;
		_sound = o._sound;
	}
	return *this;
}

int main( int argc, char ** argv ) {
	try {
		Animal x("bear", "bill", "");
		x.print();
	} catch ( exception & e ) {
		cerr << "Animal x: " << e.what() << endl;
	}

	return 0;
}
