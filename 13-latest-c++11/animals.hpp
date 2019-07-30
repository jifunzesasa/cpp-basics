// animals.cpp
#include <iostream>
using std::string;

// Base class
class Animal {
	string _name;
	string _type;
	string _sound;
	Animal(){};
protected:
	Animal ( const string & n, const string & t, const string & s )
		: _name(n), _type(t), _sound(s) {}
public:
	void speak() const;
	const string & name() const;
	const string & type() const;
	const string & sound() const;
};

class Dog : public Animal {
	int walked;
public:
	Dog( string n ) : Animal(n, "dog", "woof"), walked(0) {};
	int walk();
};

class Cat : public Animal {
	int petted;
public:
	Cat( string n ) : Animal(n, "cat", "meow"), petted(0) {};
	int pet();
};

class Pig : public Animal {
	int fed;
public:
	Pig( string n) : Animal(n, "pig", "oink"), fed(0) {};
	int feed();
};

