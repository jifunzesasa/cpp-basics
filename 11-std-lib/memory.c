// memory.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char ** argv ) {
	const static int strSize = 1024;
	const char * source = "This is a string";
	char * string = NULL;	// pointer for allocated memory

	printf("Allocating space for string.\n");
	string = malloc( strSize * sizeof(char) );
	if(string == NULL) {
		fputs("cannot allocate memory\n", stderr);
		return 1;
	}

	strncpy(string, source, strSize);
	printf("The string is: %s\n", string);

	printf("Freeing string space.\n");
	free(string);
	string = NULL;	// not necessary, but a good idea

	return 0;
}
