#include <stdio.h>

int main(void)
{
    int a, b, c;
    int min;

    scanf("%d %d %d", &a, &b, &c);

    min = (a < b) ? a : b;
    min = (min < c) ? min : c;

    printf("%d\n", min);

    return 0;
}