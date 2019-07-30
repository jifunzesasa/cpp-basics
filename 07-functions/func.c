// func.c
#include <stdio.h>

void func();

int main( int argc, char ** argv ) {
	func();
	return 0;
}

void func() {
	printf("this is func()\n");
}
