// loop.cpp

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	cout << "loop test\n";
	for (int i = 0; argv[i]; i++) {
		cout << i << ": " << argv[i] << endl;
	}
	return 0;
}
