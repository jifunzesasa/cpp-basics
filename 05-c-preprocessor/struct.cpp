// struct.cpp
#include <cstdio>
using namespace std;

struct employee {
	int id;
	const char * name;
	const char * role;
};

int main( int argc, char ** argv ) {
	struct employee joe = { 42, "Joe", "Boss" };

	printf("%s is the %s and has id %d\n",
			joe.name, joe.role, joe.id);

	return 0;
}
