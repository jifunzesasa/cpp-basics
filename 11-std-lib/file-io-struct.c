// file-io-struct.c
#include <stdio.h>
#include <string.h>
#include <stdint.h>

enum { slen = 128 };
struct s1 {
	uint8_t a;
	uint8_t b;
	char s[slen];
};

int main( int argc, char ** argv ) {
	const char * fn = "test.file";			// file name
	const char * str = "This is a literal C-string.\n";

	// create/write the file
	printf("writing file\n");
	FILE * fw = fopen(fn, "wb");

	struct s1 buf1;
	for( int i = 0; i < 5; i++ ) {
		buf1.a = i;
		buf1.b = strlen(str);
		strncpy(buf1.s, str, slen);
		fwrite(&buf1, sizeof(struct s1), 1, fw);
	}

	fclose(fw);
	printf("done.\n");

	// read the file
	printf("reading file\n");
	FILE * fr = fopen(fn, "rb");
	struct s1 buf2;
	int rc;
	while(( rc = fread(&buf2, sizeof(struct s1), 1, fr) )) {
		printf("a: %d, b: %d, s: %s", buf2.a, buf2.b, buf2.s);
	}

	fclose(fr);
	printf("done.\n");

	return 0;
}
