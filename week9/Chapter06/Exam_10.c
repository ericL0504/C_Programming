#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = 1; i <= 9; i++)
    {
        for (int j = a; j >= b; j--)
        {
            printf("%d * %d = %2d   ", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}