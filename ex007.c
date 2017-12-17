#include <stdio.h>

int
main(int argc, char **argv)
{
	int num_primes = 2, nth_prime = 10001;
	int primes[nth_prime];

	primes[0] = 2;
	primes[1] = 3;

	for (int cur = 5; num_primes < nth_prime; cur = cur + 2) {
		int index = 0;
		while (index < num_primes && cur % primes[index] != 0)
			++index;
		if (index == num_primes) {
			primes[index] = cur;
			++num_primes;
		}
	}

	printf("%d\n", primes[nth_prime - 1]);
	return 0;
}
