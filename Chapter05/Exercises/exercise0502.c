#include <stdio.h>

int main(void)
{
    int i, j, k;

    // (a)
    i = 10; j = 5;
    printf("%d\n\n", !i < j);

    // (b)
    i = 2; j = 1;
    printf("%d\n\n", !!i + !j);

    // (c)
    i = 5; j = 0; k = -5;
    printf("%d\n\n", i && j || k);

    // (d)
    i = 1; j = 2; k = 3;
    printf("%d\n\n", i < j || k);

    return 0;
}

/*
    1

    1

    1

    1
*/