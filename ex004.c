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
main(int argc, char **argv)
{
	int num = 0, largest = 0;
	for (int i = 999; i > 99; i--) {
		for (int j = 999; j > 99; j--) {
			num = i * j;
			if (is_palindrom(num) && num > largest) {
				largest = num;
			}
		}
	}
	printf("%d\n", largest);

	return 0;
}
