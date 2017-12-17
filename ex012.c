#include <stdio.h>

int
main(int argc, char **argv)
{
	int triangle_num = 0;
	int index = 1;

	int factors = 0;

	while (factors < 500) {
		triangle_num += index++;

		int candidate = 1;
		factors = 0;
		while (candidate * candidate <= triangle_num) {
			if (triangle_num % candidate == 0) {
				factors += 2;
			}
			++candidate;
		}
	}

	printf("%d\n", triangle_num);
	return 0;
}

