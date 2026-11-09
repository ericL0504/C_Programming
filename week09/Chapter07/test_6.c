#include <stdio.h>

int main(void)
{
    int n;
    int num = 1;
    char ch = 'A';

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            if (i + j <= n + 1)
            {
                printf("%d ", num);
                num++;
            }
            else
            {
                printf("%c ", ch);
                ch++;
            }
        }

        printf("\n");
    }

    return 0;
}