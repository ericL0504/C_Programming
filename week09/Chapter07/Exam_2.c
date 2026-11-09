#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star;
        int space;

        if (i <= n)
        {
            star = 2 * (n - i) + 1;
            space = i - 1;
        }
        else
        {
            star = 2 * (i - n) + 1;
            space = 2 * n - 1 - i;
        }

        for (int j = 0; j < space; j++)
            printf(" ");

        for (int j = 0; j < star; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
