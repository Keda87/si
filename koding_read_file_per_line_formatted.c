#include <stdlib.h>
#include <stdio.h>


int main(void) {

	FILE *fp;
	char name[1024];
	int weight;
	float length;


	fp = fopen("whales.txt", "r");

	while(fscanf(fp, "%s %f %d", name, &length, &weight) != EOF) {
		printf("%s whale, %d tonnes, 1.%f meters\n", name, weight, length);
	}

	fclose(fp);


	return EXIT_SUCCESS;
}
