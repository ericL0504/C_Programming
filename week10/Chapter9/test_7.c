#include <stdio.h>

int main()
{
    int arr[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // 첫 번째 행과 첫 번째 열은 1
            if (i == 0 || j == 0)
                arr[i][j] = 1;

            // 위쪽과 왼쪽의 값을 더함
            else
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    // 배열 출력
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}