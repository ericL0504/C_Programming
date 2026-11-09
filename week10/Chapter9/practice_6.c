
#include <stdio.h>

int main()
{
    int arr[3][4] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);

            arr[i][3] += arr[i][j];
        }
    }

    int sum[3] = {0};

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum[j] += arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }

    int total = 0;

    for (int j = 0; j < 3; j++)
    {
        printf("%d ", sum[j]);
        total += sum[j];
    }

    printf("%d\n", total);

    return 0;
}
