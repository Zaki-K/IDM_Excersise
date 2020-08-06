#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
	int coin, i, h, t;
	h = t = 0;
	char name[100];
	printf("Who are you?\n");
	scanf("%s", name);
	printf("Hello %s!\n", name);

	printf("Tossing a coin...\n");
	for (i = 0; i < 3; i++) {
		srand((unsigned int)time(NULL));
		coin = rand() % 2;
		printf("Round %d: ", i + 1);
		if (coin == 0) {
			printf("Heads\n");
			h++;
		} else {
			printf("Tails\n");
			t++;
		}
		sleep(1);
	}

	printf("Heads: %d, Tails: %d\n", h, t);

	return 0;
}