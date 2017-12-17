#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *name) {
	printf("Usage: %s <int>\n", name);
	exit(1);
}

int main(int argc, char **argv) {
	int i = 0, sum = 0;
	int max = 1000;

	while (i < max) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
		i += 1;
	}
	printf("%d\n", sum);
}
