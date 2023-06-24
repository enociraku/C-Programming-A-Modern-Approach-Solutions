#include <stdio.h>

int main(void)
{
    int i;

    i = 9384;
    do 
    {
        printf("%d ", i);
        i /= 10;
    } while(i > 0);

    printf("\n");

    return 0;
}

// Output: 9384 938 93 9