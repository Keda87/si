#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *fp;
	int x = 32;

	fp = fopen("output.txt", "w");
	// fp = stdout; // stdout is also a FILE, so using it will printed in console instead of file.

	fputc('B', fp);
	fputc('\n', fp);
	fprintf(fp, "x = %d\n", x);
	fputs("Hello wolld!\n", fp);

	fclose(fp);

	return EXIT_SUCCESS;
}
