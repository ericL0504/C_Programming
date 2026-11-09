#include <stdio.h>

int main(void)
{
    int n;
    char ch = 'A';
    int num = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n)
            {
                printf("%c ", ch);
                ch++;
            }
            else
            {
                printf("%d ", num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}