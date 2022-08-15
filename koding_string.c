#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void illegal_copy_string() {
	char example[] = "example";
	char *copy;

	copy = example; // it will copy the pointer instead of the string content.
	copy[0] = 'z';

	printf("%s\n", example); // example will mutated on the above operation. because it points to the same address/pointer.
}

void proper_copy_string() {
	char example[] = "bebek";
	char copy[30];

	strcpy(copy, example);
	copy[0] = 'z';
	
	printf("example value: %s\n", example);
	printf("copy value: %s\n", copy);
}

int main() {
	// These two is kinda simillar, but it quite differents.
	// *string1: immutable
	// string2[]: mutable
	char *string1 = "Hello world";
	char string2[] = "Hello world";

	printf("%s\n", string1);
	printf("%s\n", string2);

	char *string3 = "lorep insum dolor amet";
	printf("Length of string2: %zu\n", strlen(string3));

	illegal_copy_string();
	proper_copy_string();

	return EXIT_SUCCESS;
}
