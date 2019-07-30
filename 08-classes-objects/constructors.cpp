// constructors.cpp
#include <iostream>
using namespace std;

const static string unk = "unknown";
const static string clone_prefix = "clone-";

class Animal {
	string _type;
	string _name;
	string _sound;
public:
	Animal();	// default constructor
	Animal(const string & type, const string & name, const string & sound);

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
	cout << "constructor with arguments" << endl;
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
	Animal a;
	a.print();

	const Animal b("goat", "bob", "baah");
	b.print();

	const Animal c = b;
	c.print();

	a = c;
	a.print();

	return 0;
}
