#include <stdio.h>

int
is_palindrom(int num)
{
	int reversed = 0, remainder, original = num;

	while (num != 0) {
		remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num /= 10;
	}
	if (original == reversed)
		return 1;
	return 0;
}

int
main(int argc, int **argv)
{
	int num = 0, largest = 0;
	int a = 0, b = 0;
	for (int i = 999; i > 99; i--) {
		for (int j = 999; j > 99; j--) {
			num = i * j;
			if (is_palindrom(num) && num > largest) {
				a = i;
				b = j;
				largest = num;
			}
		}
	}
	printf("Largest palindrom: %d\n", largest);
	printf("Constructed by multiplying %d and %d\n", a, b);

	return 0;
}
