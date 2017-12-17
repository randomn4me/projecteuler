#include <stdio.h>
#include <math.h>

int
num_factors(int num)
{

	double square = sqrt(num);
	int int_sqrt = (int) square;
	int factors = square == int_sqrt ? -1 : 0;

	int i;
	for (i = 1; i <= int_sqrt; ++i)
		if (0 == num % i) factors += 2;

	return factors;
}

int
main(int argc, char **argv)
{
	int triangle_num = 1;

	int i = 1;
	while (num_factors(triangle_num) < 1001) {
		i++;
		triangle_num += i;
	}
	printf("%d\n", triangle_num);

	return 0;
}

