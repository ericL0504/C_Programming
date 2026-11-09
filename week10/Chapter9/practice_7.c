#include <stdio.h>

int main()
{
    int arr[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // 각 행의 첫 번째와 마지막 값은 1이다.
            if (j == 0 || j == i)
                arr[i][j] = 1;

            // 나머지는 바로 위의 두 값을 더한다.
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];

            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
