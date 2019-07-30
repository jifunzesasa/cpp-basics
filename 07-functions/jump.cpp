// jump.cpp
#include <iostream>
#include <vector>
using namespace std;

void a() { puts("this is a()"); }
void b() { puts("this is b()"); }
void c() { puts("this is c()"); }
void d() { puts("this is d()"); }
void e() { puts("this is e()"); }

int jump( const string & );
int prompt();

vector<void (*)()> funcs = { a, b, c, d, e };

int main( int argc, char ** argv ) {
	while(prompt());
	puts("\nDone.");
	return 0;
}

int prompt() {
	cout << "Choose an option:" << endl
	<< endl
	<< "1. Function a()" << endl
	<< "2. Function b()" << endl
	<< "3. Function c()" << endl
	<< "4. Function d()" << endl
	<< "5. Function e()" << endl
	<< "Q. Quit." << endl
	<< ">> ";

	string response;
	cin >> response;

	return jump(response);
}

int jump( const string & s ) {
	char code = s[0];
	if(code == 'q' || code == 'Q') return false;

	unsigned int i = (int) code - '0';
	i--;		// list is zero-based
	if( ( i < 0 ) || ( i > 8 ) ) {
		cout << "invalid choice" << endl;
		return true;
	}

	if(i < funcs.size()) {
		funcs[i]();
		return true;
	} else {
		cout << "invalid choice" << endl;
		return true;
	}
}

