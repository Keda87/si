#include <stdlib.h>
#include <stdio.h>


struct car {
	char *name;
	float price;
	int speed;
};

void set_price(struct car *c, float price);

int main(void) {

	struct car avanza = {"avanza", 200000, 500};
	struct car xenia = {.name="xenia", .price=198000, .speed=500};

	printf("Name: %s\n", avanza.name);
	printf("Price: %f\n", avanza.price);
	printf("Top Speed: %d\n\n", avanza.speed);


	printf("Name: %s\n", xenia.name);
	printf("Price: %f\n", xenia.price);
	printf("Top Speed: %d\n\n", xenia.speed);

	set_price(&xenia, 666);

	printf("Name: %s\n", xenia.name);
	printf("Price: %f\n", xenia.price);
	printf("Top Speed: %d\n\n", xenia.speed);


	return EXIT_SUCCESS;
}

void set_price(struct car *c, float price) {
	c->price = price;
}
