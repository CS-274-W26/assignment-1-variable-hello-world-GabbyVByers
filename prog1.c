#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int myrand = rand();
	myrand = myrand % 11;

	if (myrand <= 4) {
		printf("\nEat more beef, kick less cats\n");
	}

	else if (myrand <= 9) {
		printf("\nFRODO LIVES\n");
	}

	else {
		printf("\nLarn is the best roguelike\n");
	}

	printf("The random number was: %d\n\n", myrand);
	return 0;
}
