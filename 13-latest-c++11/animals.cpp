// animals.cpp
#include <iostream>
#include "animals.hpp"
using std::string;

const string & Animal::name() const {
	return _name;
}

const string & Animal::type() const {
	return _type;
}

const string & Animal::sound() const {
	return _sound;
}

void Animal::speak() const {
	printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

// Dog
int Dog::walk() {
	return ++walked;
}

// Cat
int Cat::pet() {
	return ++petted;
}

// Pig
int Pig::feed() {
	return ++fed;
}
