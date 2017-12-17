#include <stdio.h>

int 
main(int argc, char **argv)
{
    int x = 0, tmp;
    int y = 1;

    float sum = 0;

    while (y < 4000000) {
        if (y % 2 == 0) sum += y;

        tmp = x+y;
        x = y;
        y = tmp;
    }

    printf("%.0f\n", sum);

}
