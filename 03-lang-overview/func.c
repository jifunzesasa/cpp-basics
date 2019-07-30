// func.c
#include <stdio.h>
#include "func.h"

void func() {
	printf("this is in the function\n");
}

int main( int argc, char ** argv ) {
	printf("Hello, World!\n");
	func();
	return 0;
}

