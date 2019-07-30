// errno.c
#include <stdio.h>
#include <errno.h>

int main( int argc, char ** argv ) {
	printf("errno is: %d\n", errno);
	printf("Erasing file foo.bar\n");
	remove("foo.bar");
	printf("errno is: %d\n", errno);
	perror("Couldn't erase file");
	return 0;
}
