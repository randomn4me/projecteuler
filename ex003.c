#include <stdio.h>

int
main(int argc, char **argv)
{
	unsigned long long num = 600851475143;
	unsigned long largest = 0;

	while (num != 1) {
		for (unsigned long i = 2; i <= num; i++) {
			if (num % i == 0) {
				largest = i > largest ? i : largest;
				num /= i;
				break;
			}
		}
	}


	printf("%.0li\n", largest);
}
