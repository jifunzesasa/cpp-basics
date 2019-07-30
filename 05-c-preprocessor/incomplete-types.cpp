// incomplete-types.cpp
#include <iostream>
#include <vector>
using namespace std;

struct Child;	// incomplete type

struct Parent {
	string name;
	vector<Child *> children;	// we don't need to know the details heres
};

// complete the definition of Child
struct Child {
	string name;
	vector<Parent *> parents;
};

void printChildren (Parent *);
void printParents (Child *);

int main( int argc, char ** argv ) {
	Parent dad = { "George" };
	Parent mom = { "Jane" };

	Child judy = { "Judy" };
	Child elroy = { "Elroy" };

	dad.children = { &judy, &elroy };
	mom.children = { &judy, &elroy };
	judy.parents = { &mom, &dad };
	elroy.parents = { &mom, &dad };

	printChildren(&dad);
	printChildren(&mom);
	printParents(&judy);
	printParents(&elroy);
	cout << endl;

	return 0;
}

void printChildren (Parent * p) {
	cout << p->name;
	cout << " has children: ";

	vector<Child *> c = p->children;
	vector<Child *>::iterator i;
	for( i = c.begin(); i < c.end(); i++ ) {
		cout << (*i)->name;
		if((i + 1) != c.end()) {
			cout << ", ";
		}
	}
	cout << endl;
}

void printParents (Child * c) {
	cout << c->name ;
	cout << " has parents: ";

	vector<Parent *> p = c->parents;
	vector<Parent *>::iterator i;
	for( i = p.begin(); i < p.end(); i++ ) {
		cout << (*i)->name;
		if((i + 1) != p.end()) {
			cout << ", ";
		}
	}
	cout << endl;
}

