#include <stdio.h>

int
is_triple (int a, int b, int c)
{
	if (a*a + b*b == c*c && a + b + c == 1000)
		return 1;
	return 0;
}

int
main (int argc, char **argv)
{
	int num = 0;
	for (int i = 1; i < 1000; ++i)
		for (int j = i + 1; j < 1000; ++j)
			for (int k = j + 1; k < 1000; ++k)
				if (is_triple(i,j,k)) {
					num = i*j*k;
				}
	printf("%d\n", num);
	return 0;
}
