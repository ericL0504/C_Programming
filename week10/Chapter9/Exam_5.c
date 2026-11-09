#include <stdio.h>

int main()
{
    int student[4][3] = {0};
    int sum[4] = {0};
    int total = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &student[i][j]);
            sum[i] += student[i][j];
        }

        printf("%d\n", sum[i]);
        total += sum[i];
    }

    printf("%d", total);

    return 0;
}