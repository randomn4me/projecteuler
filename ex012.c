#include <stdio.h>

int
main(int argc, char **argv)
{
	int trinum = 0;
	int factors = 0;

	for (int index = 1; factors < 500; trinum += index++) {
		int candidate;

		for (factors = 0, candidate = 1;
				candidate * candidate <= trinum;
				++candidate) {
			if (trinum % candidate == 0) {
				factors += 2;
			}
		}
	}

	printf("%d\n", trinum);
	return 0;
}

