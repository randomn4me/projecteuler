#include <stdio.h>

int
main(int argc, char **argv)
{
	int sum = 0, sum_square = 0;
	for (int i = 0; i <= 100; ++i) {
		sum += i;
		sum_square += (i*i);
	}

	printf("%d\n", (sum * sum) - sum_square);

	return 0;
}
