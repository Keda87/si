#include <stdlib.h>
#include <stdio.h>

double add(double x, double y);

int main() {
	float first, second;

	printf("Please input the first number:");
	scanf("%F", &first);

	printf("Please input the second number:");
	scanf("%F", &second);


	printf("The result of the addition is %F\n", add(first, second));

	return EXIT_SUCCESS;
}


double add(double x, double y) {
	return x + y;
}
