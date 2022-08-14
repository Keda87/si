#include <stdio.h>
#include <stdlib.h>

#define MAX_SINGLE_ARRAY 5

void passing_single_array(int a[], int len) {

	for (int i = 0; i < len; i++) {
		printf("%d\n", a[i]);
	}

}

void capture_array_length(int y[12]) {
	printf("length y: %zu\n", sizeof y);
	printf("length int: %zu\n", sizeof(int));
	printf("array length y: %zu\n", sizeof y / sizeof(int));
}

void example_array_out_of_bounds() {
	int arr[] = {1, 2, 3, 4, 5};

	for (int i =0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}
}

int main(void) {

	int i;
	float f[4];

	f[0] = 3.14159;
	f[1] = 1.41421;
	f[2] = 1.61803;
	f[3] = 2.71828;

	for (i = 0; i < 4; i++) {
		printf("%f\n", f[i]);
	}

	// getting array length.
	int x[12];


	printf("length x: %zu\n", sizeof x);
	printf("length int: %zu\n", sizeof(int));
	printf("array length x: %zu\n\n", sizeof x / sizeof(int));
	capture_array_length(x); // it does  not work, because the argument is the pointer, not actual array.


	int y[5] = {97, 32, 11, 19, 32};
	passing_single_array(y, MAX_SINGLE_ARRAY);

	example_array_out_of_bounds();

	return EXIT_SUCCESS;
}

