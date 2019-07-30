// void-pointer.c
#include <stdio.h>

void * func( void * );

int main( int argc, char ** argv ) {
	printf("this is void-pointer.c\n");

	char * cp = "1234";
	int * vp = func(cp);
	printf("%08x\n", * vp);

	return 0;
}

void * func ( void * vp ) {
	return vp;
}
