//algorithm.cpp
#include <iostream>
#include <vector>
#include <locale>
#include <algorithm>
using namespace std;

// functor for count_if
class strhas {
	char needle;
	strhas(){}
public:
	strhas(char c) : needle(c) {}
	bool operator () ( string & );
};
bool strhas::operator() ( string & haystack ) {
	return haystack.find_first_of(needle) != haystack.npos;
}

string uppercase(string & s) {
	string out;
	for( char c : s) out += toupper(c);
	return out;
};

int main( int argc, char ** argv ) {
	vector<string> vs { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
	vector<int> vi { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<string>::iterator vsit;
	vector<int>::iterator viit;
	string s1 = "big light in sky slated to appear in east";

	// count
	cout << "push two extra sevens onto vs" << endl;
	vs.push_back("seven");
	vs.push_back("seven");
	cout << "count vs \"seven\": " << count(vs.begin(), vs.end(), "seven") << endl;
	cout << "pop those extra sevens" << endl;
	vs.pop_back();
	vs.pop_back();

	// find
	cout << "find 7 in vi: ";
	viit = find(vi.begin(), vi.end(), 7);
	if(viit != vi.end()) {
		cout << "found: " << *viit << endl;
	} else {
		cout << "not found" << endl;
	}

	// equal
	string p = "radar";
	if(equal(p.begin(), p.begin() + ( p.size() / 2 ), p.rbegin())) {
		cout << p << " is";
	} else {
		cout << p << " is not";
	}
	cout << " a palindrome" << endl;

	// search
	string match = "slated";
	cout << "string is \"" << s1 << "\", search term is \"" << match << "\"" << endl;
	cout << "search: ";
	string::iterator search_it = search(s1.begin(), s1.end(), match.begin(), match.end());
	if(search_it != s1.end()) {
		cout << "search term found at position " << size_t( search_it - s1.begin() ) << endl;
	} else {
		cout << "search term not found" << endl;
	}

	// show vs before count_if
	cout << "vs is: ";
	for( string s : vs ) cout << s << " ";
	cout << endl;

	// count_if
	cout << "count_if vs has 's' (functor): ";
	cout << count_if(vs.begin(), vs.end(), strhas('s') ) << endl;

	// C++11 count_if with lambda expression
	cout << "count_if vs has 's' (lambda): ";
	cout << count_if(vs.begin(), vs.end(),
			[](string & s) { return s.find_first_of('s') != s.npos; }
		) << endl;

	// for_each
	cout << "for_each uppercase: ";
	for_each(vs.begin(), vs.end(), [](string & s){ cout << uppercase(s) << " "; });
	cout << endl;

	// transform
	cout << "transform: " << endl;
	vector<int> vi2;
	cout << "vi before transformation: ";
	for( int i : vi ) cout << i << " ";
	cout << endl;
	vi2.resize(vi.size());	// make space for transformation
	transform(vi.begin(), vi.end(), vi2.begin(), [](int i){ return ++i; });

	cout << "vi2 after transformation: ";
	for( int i : vi2 ) cout << i << " ";
	cout << endl;

	transform(vi.begin(), vi.end(), vi2.begin(), vi2.begin(), [](int i, int j){ return i + j; });
	cout << "vi2 after second transformation: ";
	for( int i : vi2 ) cout << i << " ";
	cout << endl;

	cout << "vi after all transformations: ";
	for( int i : vi ) cout << i << " ";
	cout << endl;

	cout << "string before initial cap transformation: " << s1 << endl;
	char last = 0;
	transform(s1.begin(), s1.end(), s1.begin(), [&last](char c) {
		if(last == ' ' || last == 0) { last = c; return toupper(c); }
		else { last = c; return tolower(c); }
	});
	cout << "string after initial cap transformation: " << s1 << endl;

	return 0;
}
