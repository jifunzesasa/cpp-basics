// tuple.cpp
#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

int main( int argc, char ** argv ) {
	pair<int, string> p( 42, "forty-two" );
	cout << p.first << " " << p.second << endl;

	p = make_pair<int, string>(112, "one-one-two");
	cout << p.first << " " << p.second << endl;

//	tuple<string, string, string> t1( "one", "two", "three" );
//	cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << endl;

//	string a, b, c;
//	tie(a, b, c) = t1;
//	cout << a << " " << b << " " << c << endl;

//	tuple<string, string, string> t2;
//	tie(get<2>(t2), get<1>(t2), get<0>(t2)) = t1;
//	cout << get<0>(t2) << " " << get<1>(t2) << " " << get<2>(t2) << endl;

	return 0;
}
