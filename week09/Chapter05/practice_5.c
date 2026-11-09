#include <stdio.h>

int main(void)
{
    int n, max = 0, min = 101;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        if (n < 1 || n > 100)
            continue;

        if (n > max)
            max = n;

        if (n < min)
            min = n;
    }
    printf("MAX = %d\nMIN = %d\n", max, min);
    return 0;
}
