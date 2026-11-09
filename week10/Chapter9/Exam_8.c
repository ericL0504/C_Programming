#include <stdio.h>

int main()
{
    int n;
    int arr[10][10] = {0};

    scanf("%d", &n);

    // 파스칼 삼각형 생성
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    // 마지막 행부터 역순으로 출력
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}