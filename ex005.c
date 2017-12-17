#include <stdio.h>

int
is_evenly_divisible(long num)
{
	for (long i = 11; i <= 20; ++i) {
		if (num % i != 0)
			return 0;
	}
	return 1;
}

int
main(int argc, char **argv)
{
	int i;
	for (i = 20;; i = i + 20) {
		if (is_evenly_divisible(i)) {
			break;
		}
	}
	printf("%d\n", i);

	return 0;
}
