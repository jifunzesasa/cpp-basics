// string.c
#include <stdio.h>
#include <string.h>

int main( int argc, char ** argv ) {
	const static int maxBuf = 128;
	const char * s1 = "String one";
	const char * s2 = "String two";
	char sd1[maxBuf];
	char sd2[maxBuf];
	int i = 0;
	char c = 0;
	char * cp = NULL;

	printf("s1 is %s; s2 is %s\n", s1, s2);
	printf("sizeof sd1 is %ld; sizeof sd2 is %ld\n", sizeof sd1, sizeof sd2);

	strncpy(sd1, s1, maxBuf);	// strncpy -- copy a string
	printf("sd1 is %s\n", sd1);
	strncpy(sd2, s2, maxBuf);
	printf("sd2 is %s\n", sd2);

	strncat(sd1, " - ", maxBuf - strlen(sd1) - 1);	// strncat -- concatenate string
	strncat(sd1, s2, maxBuf - strlen(sd1) - 1);
	printf("sd1 is %s\n", sd1);

	printf("length of sd1 is %ld\n", strlen(sd1));	// strlen -- get length of string
	printf("length of sd2 is %ld\n", strlen(sd2));

	i = strcmp(sd1, sd2);	// strcmp -- compare strings
	printf("sd1 %s sd2 (%d)\n", (i == 0) ? "==" : "!=", i);
	i = strcmp(sd2, s2);
	printf("sd2 %s s2 (%d)\n", (i == 0) ? "==" : "!=", i);

	c = 'g';
	cp = strchr(sd1, c);	// strchr -- find a char in string
	printf("Did we find a '%c' in sd1? %s\n", c, cp ? "yes" : "no");
	if(cp) printf("The first '%c' in sd1 is at position %ld\n", c, cp - sd1);

	cp = strstr(sd1, s2);	// strstr -- find a string in string
	printf("Did we find '%s' in sd1? %s\n", s2, cp ? "yes" : "no");
	if(cp) printf("The first '%s' in sd1 is at position %ld\n", s2, cp - sd1);

	return 0;
}
