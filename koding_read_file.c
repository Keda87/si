#include <stdlib.h>
#include <stdio.h>

int main(void) {

	FILE *fp; // variable for open file.
	
	fp = fopen("hello.txt", "r");

	int c = fgetc(fp);  //`read single character.
	printf("%c\n", c);

	fclose(fp);
	

	return EXIT_SUCCESS;
}
