#include <stdio.h>

const int SIZE=2000000;

void
sieve_of_eratosthenes(int num, int *arr)
{
	for (int i = 2; i * i <= num; ++i) {
		if (!arr[i]) {
			for (int j = i*i; j <= num; j = j + i) {
				arr[j] = 1;
			}
		}
	}
}

int
main(int argc, char **argv)
{
	int arr[SIZE];

	sieve_of_eratosthenes(SIZE, arr);

	long suml = 0;

	for (int i = 2; i < SIZE; ++i) {
		if (!arr[i]) {
			suml  += i;
		}
	}

	printf("%li\n", suml);

	return 0;
}
