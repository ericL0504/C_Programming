#include <stdio.h>

int main(void)
{
    int n = 3;

    for (int i = 1; i <= 2 * n; i++)
    {
        int star;

        if (i <= n)
            star = i;
        else
            star = 2 * n - i + 1;

        for (int j = 1; j <= star; j++)
        {
            printf("⁕");
        }

        printf("\n");
    }

    return 0;
}