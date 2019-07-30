// time.c
#include <stdio.h>
#include <time.h>

int main( int argc, char ** argv ) {
	const static int bufSize = 128;
	time_t t = time(NULL);	// the current time

	struct tm gmt = *gmtime(&t);	// structured time in GMT
	struct tm localt = *localtime(&t);	// structured time local
	printf("direct from struct tm:\n");
	printf("universal time is now %04d-%02d-%02d %02d:%02d:%02d\n",
			gmt.tm_year + 1900, gmt.tm_mon, gmt.tm_mday, gmt.tm_hour, gmt.tm_min, gmt.tm_sec);

	char buf[bufSize];	// buffer for strftime

	size_t len = strftime( buf, bufSize, "%Y-%m-%d %H:%M:%S", &gmt );
	printf("from strftime (gmt):\n");
	printf("universal time is now %s (%ld characters)\n", buf, len);

	len = strftime( buf, bufSize, "%Y-%m-%d %H:%M:%S %Z", &localt );
	printf("from strftime (localt):\n");
	printf("local time is now %s (%ld characters)\n", buf, len);

	return 0;
}
