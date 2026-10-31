#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n; i++)
    {
        int star;

        if (i <= n)
            star = n - i + 1;
        else
            star = i - n;

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}