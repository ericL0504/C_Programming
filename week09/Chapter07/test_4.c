#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // 공백 출력
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        // 별 출력
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}